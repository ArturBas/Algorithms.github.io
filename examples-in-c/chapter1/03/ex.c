#include <stdio.h>

void power(int n) {
    int i, k, r;
    int d[n];
    for (k = 0; k < n; k++) {
      printf(".");
      r = 0;
      for (i = 0; i < k; i++) {
        r = (10 * r) + d[i];
        d[i] = r / 2;
        r = r % 2;
        printf("%c", (d[i] + '0'));
      }
      d[k] = 5;
      printf("5\n");
    }
  }

int main() {

  //Test
  power(10);

  return 0; 
}