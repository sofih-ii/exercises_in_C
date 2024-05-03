//Shows the sum of the numbers from 1 to 1000

#include <stdio.h>
int main (void){
  int x, sum;
  sum = 0;
  for(x=1; x<= 100; x++){
    sum = sum +x;
    
  }
  printf("%d\n", sum);
  return 0;
}
