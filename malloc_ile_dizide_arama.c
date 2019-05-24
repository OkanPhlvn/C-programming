#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
  
  int boyut,eleman,flag=0;
  printf("Dizinin boyutunu giriniz : "); scanf("%d",&boyut);

  int *dizi;
  dizi = malloc(boyut*sizeof(int));

  for(int i=0; i<boyut; i++)
  {
    printf("[%d]. elemani giriniz : ",i+1);
    scanf("%d",&dizi[i]);
  }

  for(int i=0; i<boyut; i++)
  {
    printf(" %d \n",dizi[i]);
    
  }

  printf("Dizide aramak istediginiz elemani giriniz : "); 
  scanf("%d",&eleman);

  for(int j=0; j<boyut; j++)
  {
    if(dizi[j] == eleman)
    {
      flag=1; break;
    }
    
  }

  if(flag == 1)
  {
    printf("%d sayisi dizinin icerisinde bulundu",eleman);
  }
  else
  {
    printf("%d sayisi dizinin icerisinde bulunamadi",eleman);
  }





   
   return 0;
}
