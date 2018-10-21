#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "sieve.h"
//bit position k % 32 in the array element with index k/32

// finds nth prime
int sieve(unsigned int target) {

  int prime;
  int counter = 1;

  // first initialize an array to store
  double x = log(target);
  int size;

  if (target < 5000) size = (int) (1.30 * target * x + 10);
  else size = (int)( 1.15 * target * x);
  char * array = calloc (size, sizeof(char));

  // starts counting at 2
  int i = 2;
  for ( ; counter - 1 <  target; ) {
    if (array[i] == 0) {
      prime = i;
      counter ++;
      for (int j = i; j < size; j += i)
        array[j] = 1;
    }
    i++;
  }

  return prime;

}
