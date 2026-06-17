#include <stdio.h>
int main () {
  int currentAge, nextYearYourAge;

printf("Enter Your Current Age: ");
scanf("%d", &currentAge);

nextYearYourAge = currentAge++;

printf("Your Age before increment: %d\n", nextYearYourAge);
printf("Your Age after increment: %d\n", currentAge);
 return 0;

}
