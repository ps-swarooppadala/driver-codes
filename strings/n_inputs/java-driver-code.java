import java.io.*;
import java.util.*;

public class Main {
  	// The main function reads the input in the required format.
  	// Just complete the solve function below.
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i = 0; t_i < T; t_i++)
        {
            String a = br.readLine();
            String b = br.readLine();
            String out_ = solve(a, b);
            System.out.println(out_);
         }
         wr.close();
         br.close();
    }
  
    static String solve(String opening_time, String duration){
      	// Your code goes here
        // s is the given input string
      
        String result = " ";
        return result;
    }
}
