package jav;
import java.util.Scanner;
class Systems 
{
    String User, Pass, rePass;
    int age, i;
    Scanner obj=new Scanner(System.in);
    void enterDetails()
    {
        System.out.println("Enter your username: ");
        User=obj.next();
        System.out.println("Enter your password: ");
        Pass=obj.next();
        while(true)
        {    
            if(Pass.length()<6) 
            {
                System.out.println("Password cannot be less than 6 chars.");
                System.out.println("Re-enter password: ");
                Pass=obj.next();
            }
            else 
            {
                break;
            }
        }
        System.out.println("Enter your age: ");
        age=obj.nextInt();
    }
    void line()
    {
        System.out.println("\n----------\n"); 
    } 
    void pCheck()
    {
        System.out.print("Current password: ");
        for(i=0; i<Pass.length();i++)
        {
            System.out.print("*");
        }
        System.out.println("\nRe-Enter your Password here: ");
        rePass=obj.next();
        System.out.println("Checking......");
        if (rePass.equals(Pass))
        {
            System.out.println("Correct! Thank you");
        }
        else
        {
            System.out.println("Incorrect Password. Try again.");
            for(i=0; i<7; i++)
            {
                System.out.println("You have "+(7-i)+" tries/try left");
                rePass=obj.next();
                if(rePass.equals(Pass))
                {
                    System.out.println("Correct");
                    break;
                }
                else if("exit".equals(rePass))
                {
                    System.out.println("Exiting Application.");
                    break;
                }
            }
        }
            
    }
           
}

public class JAV 
{
    
    public static void main(String[] args) 
    {
        Systems s=new Systems();
        s.enterDetails();
        s.line();
        s.pCheck();
        s.line();
        System.out.println("Done.");
    }
            
}
    
