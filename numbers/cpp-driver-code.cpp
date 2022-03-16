#include <iostream>

#include<bits/stdc++.h>
using namespace std;

string solve (int n) {
   // Your code goes here
   // n is the given input
   return "Special";
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
        int n;
        cin >> n;
        string out_;
        out_ = solve(n);
        cout << out_;
        cout << "\n";
    }
}