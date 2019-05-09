#include <stdio.h>

/* Dizinin ortalamasi bulundu*/

float ortalama(int *a,int uzunluk)
{
	int ort = *a;
	int toplam=0;
	int i;
	
	for(i=0; i<uzunluk; i++)
	{
		toplam += a[i];
		
	}
	float ort1 = (float) toplam/ (float) uzunluk;
	return ort1;
}

/* Dizinin boyu bulundu */

diziBoy(char*p)
{
	int uzunluk=0;
	int i;
	
	for(i=0; p[i] != '\0'; i++)
	{
		uzunluk++;
	}
	
	return uzunluk;
}

int main(void) {
	
    int dizi[] = {2,3,4,5,0,1,2,3,3,6,9,2};
    float boy = ortalama(dizi,12);
    printf("Dizinin ortalamasi : %.2f\n\n",boy);
    
    char s[] = "c programlama";
    int boy2 = diziBoy(s);
    printf("Dizinin boyu : %d",boy2);
  
    return 0;
}
