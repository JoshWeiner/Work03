#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int num_generator = srand( time(NULL));
  int rand_int = rand();
  printf("testing rand_int: %x", rand_int);
  
  int arr[10];

  for (int i = 0; i < 9; i ++) {
    arr[i] = rand();
  }
  arr[9] = 0;
}
