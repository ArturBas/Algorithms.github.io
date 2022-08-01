#include <stdio.h>

//Test values
int a[] = {2, 3, 4, 7, 2, 4, 9};

int main() {
    
  //Computing the sum of an array
  int sum = 0;
  size_t n = sizeof(a)/sizeof(a[0]);
  for(int i = 0; i < n; i++) {
    sum += a[i];
  }

  //Finding the maximal element of an array
  int k = 0;
  int max = a[0];
  for(int i = 1; i < n; i++) {
    if (max < a[i]) {
      k = i;
      max = a[k];
    } 
  }

  //Test
  printf("Sum of the array: %d\n", sum);
  printf("Maximal element of the array: %d\n", max);

  return 0; 
}