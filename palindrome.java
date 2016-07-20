package palindrome;

import java.util.Scanner;
public class Palindromeno 
{

   
    public static void main(String[] args) 
{
      int n,an=0,b=0,t,i=0,t1;
        
        
        Scanner s2=new Scanner(System.in);
        n=s2.nextInt();
        while(n>0)
        {
            t=n%10;
            b=b*10+(t*t*t);
            n=n/10;
    }
        if(b==n)
        {
            System.out.println("palindrome");
        }
        else

        {
                    System.out.println("not palindrome"); 
        }
    
}}