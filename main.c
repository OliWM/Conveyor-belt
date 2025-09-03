#include <stdio.h>

// somehow print til user nogle spørgsmål og bed om svar. Specificér at det skal
// være tal. Lav noget error handling hvis de ikke giver det format vi regnede
// med

int ConveyorBelt(int motors, int weight) {
  int drive = 0;

  if (weight >= motors * 5.6)
    drive = 0;

  else
    drive = 1;

  return drive;
}

int goOrNot(int drive) {
  if (drive == 0)
    printf("Yes! The conveyor belt can carry the packages.");
  else if (drive == 0)
    printf("No. The conveyor belt cannot carry the packages.");
  else
    printf("Error! Drive is unexpected value");
}