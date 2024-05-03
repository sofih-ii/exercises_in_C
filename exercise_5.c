//Show the odd  numbers from 1 to 100

#include <stdio.h>
int main (void){
  int x;
  for(x = 1; x<=100; x++){
    if(x % 2 != 0){
      printf("%d\n", x);
    }
  }
    
  return 0;
}