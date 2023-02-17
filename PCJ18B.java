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
		int t=sc.nextInt();
		while(t>0){
		    int n=sc.nextInt();
		    int i,sum=0;
		    for(i=1;i<=n;i++){
		        if(i%2==1){
		            sum=sum+(n-i+1)*(n-i+1);
		        }
		    }
		    System.out.println(sum);
		    t--;
		}
	}
}
