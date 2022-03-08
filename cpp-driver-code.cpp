#include <iostream>

#include<bits/stdc++.h>
using namespace std;
#define No_Of_Chars 256
char solve (string s) {
   // Your code goes here
   // s is the given input string
   int count[No_Of_Chars] = {0};
   int i;
   for(i=0; s[i]; i++)
      (count[s[i]])++;
   int first =0, second =0;
   for(i=0; i< No_Of_Chars; i++)
   {
      if(count[i] > count[first])
      {
         second = first;
         first = i;
      }
      else if (count[i] > count[second] && count[i] != count[first])
         second = i;
  }
   return second;
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i = 0; t_i < T; t_i++)
    {
        string s;
        cin >> s;
        char out_;
        out_ = solve(s);
        cout << out_;
        cout << "\n";
    }
}
