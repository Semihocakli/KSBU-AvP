#include <stdio.h>
#include <stdlib.h>

// Kullanýcý küpün kenar uzunluðu (cm olarak alýnýz)
// Kullanýcý iþlemNo
//Ekrana iþlem sonucuna göre ilgili cevabý yazdýrýnýz

// Ýþlem No 1: Küpün kenarlar toplamý (cm olarak)
// Ýþlem No 2: Küpün yüzey alaný toplamý (cm^2 olarak)
// Ýþlem No 3: Küpün hacmi cm^3 olarakj


int main()
{
    int a; //Küpün kenar uzunluðu
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
