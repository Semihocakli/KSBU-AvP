#include <stdio.h>
#include <stdlib.h>



int main()
{
    int sifre=3578;
    int sifre1;
    int  birler,onlar,yuzler,binler;
    int x;
    x='*';


    printf("Sifrenizi giriniz : \n");
    scanf("%d",&sifre1);

    birler=sifre1%10;
    onlar=sifre1%100/10;
    yuzler=sifre1%1000/100;
    binler=sifre1%10000/1000;

    if(binler!=3)
    {
        printf("%c",x);


    }
     else
    {
        printf("3");
    }
        if(yuzler!=5)
    {
        printf("%c",x);

    }
     else
    {
        printf("5");
    }
        if(onlar!=7)
    {
        printf("%c",x);

    }
     else
    {
        printf("7");
    }
        if(birler!=8)
    {
        printf("%c \n",x);

    }
     else
    {
        printf("8 \n");
    }
    if(sifre1==sifre)
    {
        printf("Sifreniz dogru ! \n");
    }
     if(sifre1!=sifre)
    {
        printf("Sifreniz yanlis ! \n");
    }

    return 0;
}
