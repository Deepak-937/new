#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm


int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM using GCD
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
    // Calculate GCD and LCM
    int gcdValue = gcd(num1, num2);
    int lcmValue = lcm(num1, num2);


    // Output the results
    printf("GCD of %d and %d is: %d\n", num1, num2, gcdValue);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcmValue);

    return 0;
}
