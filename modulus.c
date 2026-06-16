// Program to demonstrate modulus operator - 
#include <stdio.h>
int main () {
  // Total chocolates we have 
  int Total_chocolates = 25;

  // Number of friends
  int No_of_friends = 4;

  // Leftover chocolates after equal distribution
  int  Leftover_chocolates = Total_chocolates % No_of_friends;

  //Printing the output
  printf("Total Chocolates: %d\n", Total_chocolates);
  printf("friends: %d\n", No_of_friends);
  printf("Leftover chocolates: %d\n", Leftover_chocolates);

  return 0;

}
