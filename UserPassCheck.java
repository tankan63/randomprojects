package userpasscheck;
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

public class UserPassCheck extends JFrame {
    
    JButton check;
    JPanel panel;
    JLabel user, pass;
    JTextField usert, passt;
    
    UserPassCheck() {
        check=new JButton("Check!");
        check.setBounds(40, 280, 50, 20);
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
        panel.setBackground(Color.red);
        
        add(check);
        add(user);
        add(usert);
        add(pass);
        add(passt);
        add(panel);
        
        setTitle("Testing");
        setVisible(true);
        setSize(400, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);   
    }
    public void HeightCheck ()
    {
        if () {
            try {
                throw new NoMatchException();
            }
            catch (NoMatchException m) {
                System.out.println("Sorry. You're a manlet. You can't be in the team!");
            }
        }
        else {
            System.out.println("Success");
        }
    public static void main(String[] args) 
        {
       UserPassCheck d=new UserPassCheck();
        }
    }
    
}
