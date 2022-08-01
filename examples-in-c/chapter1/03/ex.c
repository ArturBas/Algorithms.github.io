#include <stdio.h>

int main() {

  void power(int n) {
    int i, k, r;
    int d[n];
    for (k = 0; k <= (n - 1); k++) {
      printf(".");
      r = 0;
      for (i = 0; i <= (k - 1); i++) {
        r = (10 * r) + d[i];
        d[i] = r / 2;
        r = r % 2;
        printf("%c", (d[i] + '0'));
      }
      d[k] = 5;
      printf("5\n");
    }
  }

  //Test
  power(10);

  return 0; 
}