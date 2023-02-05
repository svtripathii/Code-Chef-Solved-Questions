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
        for(int j=1;j<=n;j++) {
            int a=sc.nextInt();
            int b=sc.nextInt();
            int y=0;
            for(int i=a; i<=b; i++) {
                if(i%10==2 || i%10==3 || i%10==9) {
                    y++;
                }
            }
            System.out.println(y);
        }
		
	}
}
