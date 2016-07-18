
package project;

import java.util.Scanner;

public class Project1 {

   
    public static void main(String[] args)
    {
       int a;
        System.out.println("enter the no");
        Scanner sc=new Scanner(System.in);
        a=sc.nextInt();
        if(a>0)
        {
            System.out.println("given no is positive");
        }
        else
            System.out.println("given no is negative");
    }
}
