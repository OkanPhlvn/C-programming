#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void mukemmelsayi()
{
	  int top=0;
      int i,j;
      int sayac=0;
      
      for(i=1;i<=1000;i++)
      {
         top=0;                  
         for(j=1;j<i;j++)
         {
             if(i%j==0)
             {
                top = top + j;         
             }       
         }      
         if(top==i)
         {
         	sayac++;
            printf("%d sayisi mukemmel sayidir.\n",i);  
			      
         }   
      }  
	  printf("%d tane mukemmel sayi vardir\n\n",sayac);     
}



int main(void)
{
	mukemmelsayi();
	
	return 0;
}
