#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayac=1;
    int toplamDonguSayisi;
    int terim1=0,terim2=1;
    int sonuc=-1;

    printf("Lutfen Fibonacci terim sayisini Giriniz\n");
    scanf("%d", &toplamDonguSayisi);

    if(toplamDonguSayisi==1)
    {
        printf("1.terim %d\n", terim1);
    }
    else if(toplamDonguSayisi==2)
    {
        printf("1.terim %d\n", terim1);
        printf("2.terim %d\n", terim2);
    }
    else
    {
        printf("1.terim %d\n", terim1);
        printf("2.terim %d\n", terim2);

        sayac=3;
        //DONGU
        while(sayac<=toplamDonguSayisi)
        {
            sonuc=terim1+terim2;
            terim1=terim2;
            terim2=sonuc;

            printf("%d.terim %d\n",sayac,sonuc);
            sayac++;
        }
    }

    printf("Program sonu\n");
    return 0;
}
