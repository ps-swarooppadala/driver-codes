#include <iostream>

#include<bits/stdc++.h>
using namespace std;

char solve (string s) {
   // Your code goes here
   // s is the given input string
   return ' ';
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
