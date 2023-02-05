/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0)
		{
		    int n=in.nextInt();
		    int[] arr = new int[n];
		    int[] fre = new int[1001];
		    for(int i=0;i<n;i++)
		    {
		        arr[i]=in.nextInt();
		        fre[arr[i]]++;
		        
		    }
		    Arrays.sort(fre);
		    System.out.println(n-fre[1000]);
		    
		}
	}
}
/* Let n be size of the array and to find the maximum no. of replacement for having same element in the array will be 
replacement= N - No. which has max frequency
*/