/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int T,N,K,i,A;
		String s="";
		T=sc.nextInt();
		for(i=1;i<=T;i++)
		{
		    N=sc.nextInt();
		    K=sc.nextInt();
		    for(int j=1;j<=N;j++)
		    {
		        A=sc.nextInt();
		        if(A<=K)
		        {
		            K=K-A;
		            s=s+'1';
		        }
		        else
		        s=s+'0';
		    }
		    System.out.println(s);
		    s="";
		}
	}
}
