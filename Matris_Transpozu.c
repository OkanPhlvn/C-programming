#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int satir,sutun,i,j;

   printf("Matris satir sayisini giriniz : "); scanf("%d",&satir);
   printf("Matris sutun sayisini giriniz : "); scanf("%d",&sutun);

   int matris[satir][sutun]; int matrisT[sutun][satir];
   /*Matris elemanlari alınıyor */

   for(i=0; i<satir; i++)
   {
       for(j=0; j<sutun; j++)
       {
           printf("%d x %d elemanlarini giriniz : ",i+1,j+1); scanf("%d",&matris[i][j]);
       }
   }
   /* Transpoz alma */

   for(i=0; i<satir; i++)
   {
       for(j=0; j<sutun; j++)
       {
           matrisT[j][i] = matris[i][j];
       }
   }

   for(i=0; i<satir; i++)
   {
       for(j=0; j<sutun; j++)
       {
           printf(" %d",matris[i][j]);
       }
       printf("\n");
   }
   
    printf("Matrisin Transpozu \n");
    
/* Transpoz islemini tamamlama */

    for(i=0; i<sutun; i++)
    {
        for(j=0; j<satir; j++)
        {
            printf(" %d",matrisT[i][j]);
        }
        printf("\n");
    }

    return 0;
}
