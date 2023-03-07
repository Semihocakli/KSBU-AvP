#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ortalamanot;
    int a=1,b,toplamnot=0;
    int ogrencisayisi;

    printf("ogrenci sayisini giriniz:\n");
    scanf("%d", &ogrencisayisi);

    while(a<=ogrencisayisi)
    {
        b=0;

        printf("%d ogrencinin notunu giriniz:", a);
        scanf("%d", &b);

        toplamnot+=b;
        a++;

    }

    ortalamanot= toplamnot/ogrencisayisi;
    printf("ortalamanot: %lf\n ", ortalamanot);


    return 0;
}
