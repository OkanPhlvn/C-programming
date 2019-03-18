#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void asalmi()
{
	int i,j,sayac=1,sayi=0;
	
	
	for(i=2; i<=1000; i++)
	{
		sayac=1;
		for(j=2; j<i; j++)
		{
			if(i%j ==0)
			{
				sayac=0;
				break;
			}
		}
		if(sayac==1)
		{
			sayi++;
		}
	}
	printf("%d\n",sayi);
}

int main(void)
{
	asalmi();
	
	return 0;
}
