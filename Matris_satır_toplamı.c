#include <stdio.h>
#include <stdlib.h>


int main()
{

   int matris[3][3];

    int toplam=0;

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Matris degerlerini giriniz : "); scanf("%d",&matris[i][j]);
        }

    }

    for(int i=0; i<3;i++)
    {
        for(int j=0; j<3; j++)
        {

            toplam = toplam + matris[i][j];
        }
        printf(" %d",toplam);
    }


    return 0;
}
