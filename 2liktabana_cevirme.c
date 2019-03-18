#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

 int ikiliktaban(int sayi)
{
 int sayac,i;
 int ikilik[100];
 
   sayac=0;
   while(sayi>0)
   {
       sayac++;
       ikilik[sayac]=sayi%2;
       sayi=sayi/2;
   }
   for(i=sayac;i>0;i--)
   printf("%d",ikilik[i]);
}
int main(){
        int x;
        printf("Bir sayi giriniz :"); scanf("%d",&x);
        ikiliktaban(x);
   return 0;
 }
