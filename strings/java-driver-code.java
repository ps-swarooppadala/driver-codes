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
            String str = br.readLine();
            char out_ = solve(str);
            System.out.println(out_);
         }
         wr.close();
         br.close();
    }
  
    static char solve(String s){
      	// Your code goes here
        // s is the given input string
      
        char result = ' ';
        return result;
    }
}
