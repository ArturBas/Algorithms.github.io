#include <stdio.h>
#include <stdbool.h>

//Test data
struct person {
  char name[20];
  char surname[20];
  struct date {
    int day;
    int month;
    int year;
  } birthday;
  bool male;
} family[4] = {
  {"Jack", "Brown", {2, 5, 1999}, true},
  {"John", "Patrick", {25, 2, 1943}, true},
  {"Lisa", "Flower", {31, 12, 2010}, false},
  {"Jackie", "Chan", {7, 7, 1998}, false}
  };

int main() {

  //Searching algorithm
  int count = 0;
  for(int i = 0; i < (sizeof(family) / sizeof(family[0])); i++) {
    if (family[i].male != true && family[i].birthday.year > 2000) {
      count++;
    }
  }

  printf("%d\n", count);
  printf("%s\n", family[3].name);
  printf("%d.%d.%d\n", family[2].birthday.day, family[2].birthday.month, family[2].birthday.year);

  return 0;
}