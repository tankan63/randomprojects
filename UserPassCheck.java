package activity;
import java.util.*;
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class NoMatchException extends RuntimeException {
    public NoMatchException() {
        System.out.println("Exception raised!");
    }
    NoMatchException(String msg) {
        super(msg);
    }
}

public class UserPassCheck extends JFrame implements ActionListener{
    
    JButton check;
    JPanel panel;
    JLabel user, pass;
    JTextField usert, passt, message;
    
    UserPassCheck() {
        check=new JButton("Check!");
        check.setBounds(40, 180, 90, 20);
        check.addActionListener(this);
        user=new JLabel("User Name");
        user.setBounds(60,20,80,20);
        usert=new JTextField();
        usert.setBounds(150,20,80,20);
        pass=new JLabel("PassWord");
        pass.setBounds(60,40,80,20);
        passt=new JTextField();
        passt.setBounds(150,40,80,20);
        panel=new JPanel();
        panel.setBounds(0, 0, 390, 390);
        panel.setBackground(Color.orange);
        message=new JTextField();
        message.setBounds(60, 230, 200, 20);
        
        add(check);
        add(user);
        add(usert);
        add(pass);
        add(passt);
        add(panel);
        add(message);
        
        setTitle("Testing");
        setLayout(null);
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);   
    }
    
    public void actionPerformed(ActionEvent e) {
        String User=usert.getText();
        String Pass=passt.getText();
        if(e.getSource()==check) {
            if(User.equals(Pass)==false) {
                try {
                    throw new NoMatchException();
                }
                catch(NoMatchException m) {
                    message.setText("Does not match!");
                }
            }
            else {
                message.setText("Matches.");
            }
        }
        
    }
    
    public static void main(String[] args) 
        {
       UserPassCheck d=new UserPassCheck();
        }
    }
