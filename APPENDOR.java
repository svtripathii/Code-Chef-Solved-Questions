/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
		while (n-->0) {
		    int len = sc.nextInt();
		    Long res = sc.nextLong();
		    int ar[] = new int[len];
		    int op1 = 0;
		    for (int i=0;i<len;i++) {
		        ar[i]= sc.nextInt();
		        op1=op1|ar[i];
		    }
		    Long op2 = op1^res;
		    
		    if ((op2|op1) == res) {
		        System.out.println(op2);
		    }
		    else {
		        System.out.println("-1");
		    }
		}
	}
}
