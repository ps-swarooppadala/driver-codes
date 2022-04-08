import java.io.*;
import java.util.*;


class Magic
{
   public static boolean isMagic(int n)
   {
       int sum = 0;
      
      
       while (n > 0 || sum > 9)
       {
           if (n == 0)
           {
               n = sum;
               sum = 0;
           }
           sum += n % 10;
           n /= 10;
       }
      
      
       return (sum == 1);
   }
   
   
   public static void main(String args[])
    {
     int n = 53422;
     if (isMagic(n))
        System.out.println("Magic Number");
          
     else
        System.out.println("Not a magic Number");
    }
}
 
