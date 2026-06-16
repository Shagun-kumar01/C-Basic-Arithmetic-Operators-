#include <stdio.h>
int main () {
int Total_Rooms, check_in, Left_Rooms;
  printf("Total Rooms in Hotel:\n"); // taking total room input 
  scanf("%d", &Total_Rooms);

  printf("Today Check in:\n"); // taking check-in count
  scanf("%d", &check_in);

  Left_Rooms = Total_Rooms-check_in; // calculating left rooms 

  printf("Total Left Rooms: %d\n", Left_Rooms); // printing the output
  return 0;
}
  
