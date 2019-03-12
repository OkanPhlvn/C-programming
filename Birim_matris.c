#include <stdlib.h>
#include <stdio.h>


int main()
{

 int dizi[2][2] = {{1,2,3},{4,5,6}};
  int i,j;


  for(i=0; i<2; i++)
  {
      for(j=0; j<2; j++)
      {
          if(i==j)
          {
              dizi[i][j]=1;
              printf(" %d",dizi[i][j]);
          }
          else{
            dizi[i][j]=0;
            printf(" %d",dizi[i][j]);
          }

      }
      printf("\n");
  }


return 0;
}
