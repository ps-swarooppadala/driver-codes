using System;

// The Main function reads the input in the required format.
// Just complete the solve function below.
class Program {
    static void Main(string[] args) {
      int T = int.Parse(Console.ReadLine());
      for(int t_i = 0; t_i < T; t_i++)
      {
          int n = Convert.ToInt32(Console.ReadLine());
          string _out = solve(n);
          Console.WriteLine(_out);
      }
    }

    static string solve(int n){
      // Your code goes here
      // n is the given input number
      return "Special";
    }
}
