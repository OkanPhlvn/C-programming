#include <stdio.h>
#include <stdlib.h>

int main()
{
    float aylik_top_saat;
    float saat_ucreti;
    float taban_maas;
    float maas;
    float vergi;
    int islem;

    printf("Aylik toplam saat : "); scanf("%f",&aylik_top_saat);
    printf("Saat ucreti : "); scanf("%f",&saat_ucreti);
    printf("Taban maas : "); scanf("%f",&taban_maas);
    maas = taban_maas + (aylik_top_saat*saat_ucreti);
    printf("Maas : %.2f\n",maas);

    printf(" Maasiniz 1000 TL altinda ise:1\n Maasiniz 1000-1500 TL arasinde ise :2 \n Maasiniz 1500-2000 TL arasinda ise :3 \n Maasiniz 2000 TL ustunde ise :4 \n");
    printf(" $$$$$$$$$$$$$\n\n");

    tekrar : printf("islemi seciniz : "); scanf("%d",&islem);

    switch(islem)
    {
        case 1:
            vergi = maas*(0.1);
            printf("Odeyeceginiz vergi : %.2f\n",vergi);
        break;

        case 2:
            vergi = 1000*(0.1) + (maas-1000)*(0.15);
            printf("Odeyeceginiz vergi : %.2f\n",vergi);
        break;

        case 3:
            vergi = 1000*(0.1) + 500*(0.15) + (maas-1500)*(0.20);
            printf("Odeyeceginiz vergi : %.2f\n",vergi);
        break;

        case 4:
             vergi = 1000*(0.1) + 500*(0.15) + 500*(0.20) + (maas-2000)*(0.25);
             printf("Odeyeceginiz vergi : %.2f\n",vergi);
        break;

        default : printf("Hatali tusa bastiniz "); goto tekrar;
    }

    return 0;
}
