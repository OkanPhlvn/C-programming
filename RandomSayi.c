#include <stdio.h>
#include <math.h>
#include <time.h>
#include <ctype.h>


int main(){
  int i;
  int diceRoll;

  for(i=0; i<20; i++)
  {
    diceRoll = ( rand() %6 ) + 1;
    printf("%d \n",diceRoll);
  }
  
  return 0;
}
