using System;

// The Main function reads the input in the required format.
// Just complete the solve function below.
class Program {
    static void Main(string[] args) {
      int T = int.Parse(Console.ReadLine());
      for(int t_i = 0; t_i < T; t_i++)
      {
          string s = Console.ReadLine();
          char _out = solve(s);
          Console.WriteLine(_out);
      }
    }

    static char solve(string s){
      // Your code goes here
      return ' ';
    }
}
