#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int i = 1;
    while (i<=n)
    {
        // printing the spaces the first.
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space = space - 1;
        }

        // print the first triangle
        int j = 1;
        while (j<=i)
        {
            cout<<j;
            j = j + 1;
        }

        // print the second triangle
        int z = i - 1;
        while (z)
        {
            cout<<z;
            z = z - 1;
        }
        i = i + 1;
        cout<<endl;


    }

}

// #include <stdio.h>

// int main() {
//     int n = 5; // Number of rows in the pattern
    
//     // Outer loop for rows
//     for (int i = 1; i <= n; i++) {
        
//         // Print spaces
//         for (int j = 1; j <= n - i; j++) {
//             printf(" ");
//         }
        
//         // Print left side of the pattern
//         for (int j = 1; j <= i; j++) {
//             printf("%d", j);
//         }
        
//         // Print right side of the pattern
//         for (int j = i - 1; j >= 1; j--) {
//             printf("%d", j);
//         }
        
//         // Move to the next line after each row
//         printf("\n");
//     }

//     return 0;
// }

































