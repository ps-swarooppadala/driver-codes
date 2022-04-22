#include <stdio.h>

void solve (int opening_hh, int opening_mm, int duration_hh, int duration_mm) {
    // Your code goes here
  
    // Print the output here
  printf(" ");
}

// The main function reads the input in the required format.
// Just complete the solve function above.
int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        int a, b, c, d;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        solve(a, b, c, d);
        printf("\n");
    }
  return 0;
}