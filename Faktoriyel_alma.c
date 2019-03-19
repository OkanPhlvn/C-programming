#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int faktoriyel(int sayi)
{
	int i;
	int f=1;
	for(i=1; i<=sayi; i++)
	{
		f = f*i;
	}
	return f;
}

int main()
{
	int a;
	printf("Sayi :"); scanf("%d",&a);
	printf("%d Sayisinin faktoriyeli : %d",a,faktoriyel(a));
	
 return 0;
}
