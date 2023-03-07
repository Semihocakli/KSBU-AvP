#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Global Degiskenler
int ogrenciSayisi=76;
int sinavSayisi=3;

//Fonksiyon Prototipi
void donemSonuNotuHesapla(double OgrNotlari[ogrenciSayisi][sinavSayisi],double donemSonuNotlari[ogrenciSayisi]);

void donemSonuNotuHesapla(double OgrNotlari[ogrenciSayisi][sinavSayisi],double donemSonuNotlari[ogrenciSayisi])
{
    int i,j;
    double sonuc=0;

    for(i=0;i<ogrenciSayisi;i++)
    {
        sonuc=(double)0;
        sonuc+=OgrNotlari[i][0]*((double)30/100);
        sonuc+=OgrNotlari[i][1]*((double)20/100);
        sonuc+=OgrNotlari[i][2]*((double)50/100);
        donemSonuNotlari[i]= sonuc ;
    }
}

int main()
{
    double ogrenciNotlari[ogrenciSayisi][sinavSayisi];
    double donemSonuNotu[ogrenciSayisi];
    int i,j;
    srand(time(NULL));

    for(i=0;i<ogrenciSayisi;i++)
    {
        printf("Ogrenci %d.\t",i+1);
        for(j=0;j<sinavSayisi;j++)
        {
            ogrenciNotlari[i][j]= (double)(rand()%101);
            printf("Sinav %d. : %lf \t",j+1,ogrenciNotlari[i][j]);
        }
        printf("\n");
    }

    donemSonuNotuHesapla(ogrenciNotlari,donemSonuNotu);

    printf("\n\n----Donem Sonu Notlari---\n");
    for(i=0; i<ogrenciSayisi; i++)
    {
        printf("Ogrenci %d. Donem Sonu Not: %lf\n",i+1, donemSonuNotu[i]);
    }


    printf("Hello world!\n");
    return 0;
}
