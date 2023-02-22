/* Author- Yaswanth, dont fucking dare copy my code */

import java.util.*;
import java.lang.*;
import java.io.*;

/*STOP COPYING MY CODE IDIOT, GO AND DO IT ON YOUR OWN , TAKE A INSPIRATION IF YOU WANT*/
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0)
		{
		  int n=in.nextInt();
		  int tax=0;
		  
		  if(n<=250000)
		  tax=0;
		  if(n>250000&&n<=500000)
		  tax=((n-250000)*5)/100;
		  if(n>500000&&n<=750000)
		  tax=12500+((n-500000)*10)/100;
		  if(n>750000&&n<=1000000)
		  tax=12500+25000+((n-750000)*15)/100;
		  if(n>1000000&&n<=1250000)
		  tax=12500+25000+37500+((n-1000000)*20)/100;
		  if(n>1250000&&n<=1500000)
		  tax=12500+25000+37500+50000+((n-1250000)*25/100);
		  if(n>1500000)
		  tax=12500+25000+37500+50000+62500+((n-1500000)*30/100);
		  System.out.println(n-tax);
		}
	}
}
