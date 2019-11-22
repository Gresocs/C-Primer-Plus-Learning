// practice 003
/* convert age from year to days */

#include <stdio.h>

int main(void)
{
  int age_year, age_days;
  age_year = 37;
  age_days = 12 * age_year;
  printf("The age %d year is %d days.\n", age_year, age_days);
  printf("The age %d year is %d days.\n", age_year, 12*age_year);
}
