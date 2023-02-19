/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
	    while(t-- >0)
	    {
	        int l=sc.nextInt(),count=0,c=0;
	        int Arr[]=new int[l];
	        int dep[]=new int[l];
	        for(int i=0;i<l;i++){
	            Arr[i]=sc.nextInt();
	        }
	        for(int i=0;i<l;i++){
	            dep[i]=sc.nextInt();
	        }
	        Arrays.sort(Arr);
	        Arrays.sort(dep);
	        for(int i=0;i<l;i++){
	            if(Arr[i]<dep[c]) count++;
	            else c++;
	        }
	        System.out.println(count);
	    }
	}
}