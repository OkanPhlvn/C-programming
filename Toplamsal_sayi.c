#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Toplamsal sayi tanim : 3 basamakli bir sayinin yüzler basamagindaki rakami onlar ve birler basamagindaki rakama esit olmalidir*/
	 
	int sayi,a,b,c;
	
	printf("Uc basamakli bir sayi giriniz :"); scanf("%d",&sayi);
	
	a = sayi/100;
	b = (sayi/10)%10;
	c = sayi%10;
	
	if(sayi>=100 && sayi=<999)
	{
		if(a == b+c)
	{
		printf("%d Sayisi toplamsal sayidir.",sayi);
	}
	else
	{
		printf("%d sayisi toplamsal sayi degildir.",sayi);
	}
		
	}
	else {
		printf("Lutfen 999 dan kucuk bir sayi giriniz.");
	}
	
	
    return 0;
}
