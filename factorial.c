#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) { // Base case
        return 1;
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;
    
    // Taking input from the user
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("The factorial of %d is %d.\n", num, factorial(num));
    }
    
    return 0;
}
