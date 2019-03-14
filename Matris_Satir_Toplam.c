#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matris[3][5];
    int i,j,sum=0;

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d. Degeri giriniz : ",i+1); scanf("%d",&matris[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            printf(" %d",matris[i][j]);
        }
        printf("\n");
    }

    /* Satirlarin toplanması */

    for(i=0; i<3; i++)
    {
        for(j=0; j<5; j++)
        {
            sum += matris[i][j];
        }
        printf("*****\n");
        printf(" %d\n",sum);
        sum =0;
    }









    return 0;
}
