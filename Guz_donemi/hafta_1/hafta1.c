#include <stdio.h>
#include <stdlib.h>

// Kullan�c� k�p�n kenar uzunlu�u (cm olarak al�n�z)
// Kullan�c� i�lemNo
//Ekrana i�lem sonucuna g�re ilgili cevab� yazd�r�n�z

// ��lem No 1: K�p�n kenarlar toplam� (cm olarak)
// ��lem No 2: K�p�n y�zey alan� toplam� (cm^2 olarak)
// ��lem No 3: K�p�n hacmi cm^3 olarakj


int main()
{
    int a; //K�p�n kenar uzunlu�u
    int secim;
    int sonuc;

    printf("Lutfen kupun bir kenar uzunlugunu cm cinsinden giriniz\n");
    scanf("%d", &a);

    printf("Lutfen islem tipini seciniz\n");
    printf("1- Kupun kenar uzunluklarinin toplami\n");
    printf("2- Kupun yuzey alanlarinin toplami\n");
    printf("3- Kupun hacmi\n");
    scanf("%d",&secim);

    if(secim==1)
    {
        sonuc= 12a;
        printf("Kupun kenar uzunluklari toplami: %d cm'dir. \n",sonuc);
    }
    else if(secim==2)
    {
        sonuc= 6aa;
        printf("Kupun yuzey toplami: %d cm^2'dir \n",sonuc);
    }
    else if(secim==3)
    {
        sonuc= aa*a;
        printf("Kupun hacmi: %d cm^3'dir \n",sonuc);
    }
    else
    {
        printf("Lutfen 1-3 arasinda secim yapiniz \n");
    }

    printf("Program Sonu!\n");
    return 0;
}
