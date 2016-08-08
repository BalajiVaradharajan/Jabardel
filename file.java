import java.io.*;
import  java.util.*;

class MoneyCount
{
	public int MoneyCount1(int input1,int[] arr){
		// Write code here...
		if(input1>0){
		int k[]=arr;
		
		int tmp=0,n=0;
		for(int i=k.length-1;i>=0;i--){
			for(int j=1;k[i]*j<=input1;j++){
				if((n=MoneyCount1(input1-k[i]*j,arr))!=-1){
					
					tmp=j+n;
					i=0;
					
					break;
				}
			}
		}
		
		return tmp;
	}
		return 0;
		}
    public static void main(String args[]){
    	MoneyCount obj=new MoneyCount();
    	Scanner scr=new Scanner(System.in);
    	System.out.println("Enter How many type of coins");
    	int num=scr.nextInt();
    	System.out.println("Enter type of coins");
    	int[] arr=new int[num];
    	for(int i=0;i<num;i++){
    		arr[i]=scr.nextInt();
    	}
    	
    	System.out.println("Enter Total Amount");
    	int total=scr.nextInt();
    	System.out.println("Least Count : "+obj.MoneyCount1(total,arr));
    }
}