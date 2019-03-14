#include <stdio.h>
#include <stdlib.h>


int main()
{

  int matris[4][3] =
    {
      {1,2,3},
      {4,5,6},
      {7,8,9},
      {5,9,8}
    };

   int matris2[4][3] =
    {
      {4,7,-3},
      {1,8,5},
      {2,10,19},
      {7,-9,83}
    };

    int cevap[4][3];


  for(int i=0; i<4; i++)
  {
      for(int j=0; j<3; j++)
      {
          cevap[i][j]= matris[i][j] + matris2[i][j];
          printf(" %d",cevap[i][j]);
      }
      printf("\n");
  }

    return 0;
}
