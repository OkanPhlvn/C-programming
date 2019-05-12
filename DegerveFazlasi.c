#include <stdio.h>

// Program çıktısı : 2 1  4 3  6 5  8 7  10 9


void odd();
void even();
int n=1;

void odd()
{
  if(n<=10)
  {
    printf(" %d",n+1);
    n++;
    even();
  }
  return;
}

void even()
{
  if(n<=10)
  {
    printf(" %d ", n-1);
    n++;
    odd();
  }
  return ;

}

int main(void) {
 
  odd();

  return 0;
}
