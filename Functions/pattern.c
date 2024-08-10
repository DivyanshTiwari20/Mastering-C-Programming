// Write a program using function to print the following pattern (first n lines) 
// * 
// * * * 
// * * * * * 


#include <stdio.h>

void print_pattern(int n) {
    // Loop through each line
    for (int i = 1; i <= n; i++) {
        // Loop to print stars in the current line
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing stars
    }
}

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    
    // Call the function to print the pattern
    print_pattern(n);
    
    return 0;
}
 
 
 
 
 
 
 
 
