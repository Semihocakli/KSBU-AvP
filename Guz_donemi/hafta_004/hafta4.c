#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    unsigned int faktorielSonuc=1;
    int faktorielSayi;

    /*
        Uygulama 1-
        Kullanici girisi ile aldiginiz sayinin
        faktoriyelini hesaplayiniz.

        5! -> 12345          54321
    */

    printf("Lutfen faktoriyel sayisini giriniz:\n");
    scanf("%d",&faktorielSayi);


    for(i=1; i<=faktorielSayi; i++)
    {
        faktorielSonuc=faktorielSonuc*i;
        //Kod
        printf("i: %d - faktoriyel: %d\n", i, faktorielSonuc);
    }

    printf("Program Sonu!\n");
    return 0;
}
