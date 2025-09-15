// main.c
// calculates if conveyor belt can handle a given load

#include <stdio.h>
int main(void) {
  float packageWeight = 0;
  int motors = 0;
  float capacity = 5.6;

  puts("How many motors are carrying the packages?");
  scanf("%d", &motors);
  puts("How many kg of packages do we expect?");
  scanf("%f", &packageWeight);

  if (motors * capacity >= packageWeight) {
    puts("Yes! The conveyor belt can carry the packages.");
  } else {
    puts("No. The conveyor belt cannot carry the packages.");
  }
  return 0;
}
