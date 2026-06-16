#include <stdio.h>
int main() {

int a, b, sum;

printf("Enter first number: "); // taking input from user 
scanf("%d", &a); 

printf("Enter the second value: ");
scanf("%d", &b);

sum = a + b; // Performing the addition 

printf("Sum of %d and %d = %d\n", a, b, sum); // Printing the output
return 0;
}
