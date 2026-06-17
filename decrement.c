// Program of demonstrate Decrement operator 
#include <stdio.h>
int main () {

// Battery percentage
int Battery = 100; 

printf("Current Battery: %d%%\n", Battery);

int BatteryAfterUse = Battery--;

// printing battery after use
printf("Battery before use: %d%%\n", BatteryAfterUse);
printf("Battery after use: %d%%\n",Battery);

return 0;

}

