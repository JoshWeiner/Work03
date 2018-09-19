#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand( time(NULL));
  int rand_int = rand();
  printf("testing rand_int: %d \n", rand_int);


  int arr[10]; //initialize first array with capacity for 10 ints

  for (int i = 0; i < 9; i ++) { //populate array
    arr[i] = rand();
  }

  arr[9] = 0; //set 10th value in array to zero

  printf("Printing array: \n");

  for (int i = 0; i < 10; i ++) { //Print each value in array
    printf("Place: %x, Value: %d \n", i, arr[i]);
  }

  /* ----- Part Dos ----- */

  int *pa = arr; //pointer to first array

  int arr_dos[10]; //initialize second array with capacity for 10 ints

  int *pr = arr_dos; //pointer to second array

  for (int i = 0; i < 10; i ++) { //Populate second array
    *(pr + (9-i)) = *(pa + i); //Memory space for each value in the second array is populated in reverse order, using pointers from the first array which point to the "opposite" space in the first array.
  }

  printf("Printing second array: \n");

  for (int i = 0; i < 10; i ++) { //Print each element of second array to test
    printf("Place: %x, Value: %d \n", i, arr_dos[i]);
  }

}
