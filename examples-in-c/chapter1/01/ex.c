#include <stdio.h>
#include <math.h>

//Test values
float x = 2.5;
int n = 3;

int main() {
  
  float y = 1.0;
  while (n > 0) {
    if ((n % 2) == 1) {
      y *= x;
    }
    x *= x;
    n /= 2;
  }

  //Test
  printf("x ^ n = %f\n", y);
  
  return 0; 
}