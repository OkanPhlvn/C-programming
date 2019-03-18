#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int rakamlaritopla(int sayi)
{
	int top=0;
	int rakam;
	while(sayi>0)
	{
		rakam = sayi %10;
		top = top + rakam;
		sayi = sayi /10;
	}
	return top;
}

int main(void)
{
	int x;
	printf("Sayiyi gir :"); scanf("%d",&x);
	printf("Toplam : %d",rakamlaritopla(x));
	return 0;
}
