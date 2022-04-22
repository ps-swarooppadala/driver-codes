using System;

// The Main function reads the input in the required format.
// Just complete the solve function below.
class Program {
    static void Main(string[] args) {
      int T = int.Parse(Console.ReadLine());
      for(int t_i = 0; t_i < T; t_i++)
      {
          string a = Console.ReadLine();
          string b = Console.ReadLine();
          string _out = solve(a, b);
          Console.WriteLine(_out);
      }
    }

    static string solve(string opening_time, string duration){
      // Your code goes here
      return " ";
    }
}
