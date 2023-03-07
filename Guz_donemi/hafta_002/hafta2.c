#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int birlerBasamagi;
    int onlarBasamagi;
    int yuzlerBasamagi;
    int basamaklarToplami;

    printf("Lutfen 3 basamakli bir tam sayi giriniz: \n");
    scanf("%d", &sayi);

    birlerBasamagi = sayi%10;
    printf("Birler Basamagi: %d 'dir\n", birlerBasamagi);

    onlarBasamagi = (sayi%100-birlerBasamagi)/10;
    printf("Onlar Basamagi: %d 'dir\n", onlarBasamagi);

    yuzlerBasamagi = (sayi%1000-onlarBasamagi*10-birlerBasamagi)/100;
    printf("Yuzler Basamagi: %d 'dir\n", yuzlerBasamagi);

    basamaklarToplami=yuzlerBasamagi+onlarBasamagi+birlerBasamagi;
    printf("Basamak rakamlarinin toplami %d 'dir.\n", basamaklarToplami);

    return 0;
}
