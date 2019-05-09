#include <stdio.h>
#include <stdlib.h>

#define MAX 50 

void Zsort(int D[],int n,int st)
{
	int i,j,temp;

	/* Artan sırada sıralama */	
	if(st == 1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] > D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
	
	}
	
	/* Azalan sırada sıralama */
	if(st == -1)
	{
		for(i=0; i<n-1; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(D[j] < D[j+1]){
					temp = D[j+1];
					D[j+1] = D[j];
					D[j]= temp;
				}
			}
		}
		
	}
	
}

int main()
{
	int array[MAX],boyut,i,st;
	
	/* Dizinin eleman sayısı ve hangi işlemin yapılacağı bilgisi alınıyor. */
	printf("Kac elemanli olsun : "); scanf("%d",&boyut);
	printf("Artan sirada istiyorsaniz 1, azalan sirada istiyorsaniz -1 yaziniz :"); scanf("%d",&st);
	
	
	/* Elemanların girişi alındı. */
	for(i=0; i<boyut; i++)
	{
		printf("%d. sayi gir :",i+1); scanf("%d",&array[i]);
	}
	
	
	Zsort(array,boyut,st); // değerler parametrelere gönderildi.
	
	
	/* Elemanların sıralanmış hali yazıldı. */
	for(i=0; i<boyut; i++)
	{
		printf(" %d",array[i]);
	}
	
	return 0;
}
