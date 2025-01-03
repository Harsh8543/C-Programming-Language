// #include <stdio.h>

// int main() {
//     int n, i, j;

//     // Input the number of rows for the diamond
//     printf("Enter the number of rows for the diamond: ");
//     scanf("%d", &n);

//     // Upper part of the diamond
//     for (i = 1; i <= n; i++) {
//         // Print spaces before the asterisks
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print asterisks
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     // Lower part of the diamond
//     for (i = n - 1; i >= 1; i--) {
//         // Print spaces before the asterisks
//         for (j = 1; j <= n - i; j++) {
//             printf(" ");
//         }

//         // Print asterisks
//         for (j = 1; j <= 2 * i - 1; j++) {
//             printf("*");
//         }

//         // Move to the next line
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
int main() {
    int  i, j;
    
    for (i = 1; i <= 3; i++) {
      
        for (j=1;j<i;j++) {
            printf(" ");
        }
        for (j=1;j<=2*(3-i)+1;j++) {
            printf("*");
        }      
        printf("\n");
    }
    for (i=2;i>=1;i--) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j=1;j<=2*(3-i)+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

