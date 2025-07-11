#include <stdio.h>

int main() {
    
    printf("Welcome to the Calculator!\n");
    printf("This program will help you to +,-,*,/ two floating-point numbers.\n");

    // Here I am declaring variables for the two floating-point numbers FYI double is faster than float

    double firstFloat;
    double secondFloat;
    double result;

    printf("Enter first float: ");
    scanf("%lf", &firstFloat);   // This is the correct way to read a double in C
    
    printf("Enter second float: ");
    scanf("%lf", &secondFloat);   // This is the correct way to read a double in C
    

    result = firstFloat + secondFloat;
    printf("The sum of your first number and second number: %.2lf\n", result);

    result = firstFloat - secondFloat;
    printf("The difference of your first number and second number: %.2lf\n", result);

    result = firstFloat * secondFloat;
    printf("The product of your first number and second number: %.2lf\n", result);

    result = firstFloat / secondFloat;
    printf("The division of your first number and second number: %.2lf\n", result);

    printf("Thank you for using the calculator!\n");

    
    return 0;
}