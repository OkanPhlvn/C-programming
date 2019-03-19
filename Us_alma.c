#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int us_al(int taban,int us)
{
	int i;
	int sonuc=1;
	for(i=1; i<=us; i++)
	{
		sonuc = sonuc*taban;
	}
	return sonuc;
}

int main()
{
	int a,b;
	printf("Taban :"); scanf("%d",&a);
  printf("Us :"); scanf("%d",&b);
	printf("Sayinin Ussu : %d",us_al(a,b));
	
 return 0;
}
