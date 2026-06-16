#include <stdio.h>
int main () {

  // Per day salary fixed
  int single_day_salary = 120;

  // Total working day in a month
  int Total_day = 30, Total_salary;

  // calculating monthly salary
  Total_salary = single_day_salary * Total_day;

  // printing the output
printf("Your Total Salary: %d\n", Total_salary);
return 0;

}
