#include <stdio.h>

int isPrime(int n);

int main(void) {

	 int a ;
 	 printf("sayi : "); scanf("%d",&a);
 	 isPrime(a);
 	 return 0;
}

int isPrime(int n)
{
	int i,sayac=0;
	
 	for(i=1; i<=n;i++)
 	{
 		if(n%i ==0)
 		{
 			printf("%d\n\n\n",i);
 			sayac++;
		 }
	}
	if(sayac==2)
	{
		printf("%d sayisi asal sayidir.\n",n);
	}
	else
	{
		printf("%d sayisi asal sayi degildir.\n",n);
	}

	return i;
}
