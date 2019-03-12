#include <stdio.h>
#include <stdlib.h>


int main()
{

    int sayilar[] = {44,58,75,65,12,34,25,10,8,20};
    int sayi;
    printf("Sayi giriniz: "); scanf("%d",&sayi);
    int i,flag=0;

    for(i=0; i<10; i++)
    {
        if(sayilar[i]==sayi)
        {
            flag=1; break;
        }
    }
    if(flag==1)
    {
        printf("Girilen %d degeri dizinin %d. indisinde bulunmustur.",sayi,i);
    }
    else
    {
        printf("Sayi bulunamadi");
    }

    return 0;
}

































}
