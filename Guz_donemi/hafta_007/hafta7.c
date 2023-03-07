#include <stdio.h>
#include <stdlib.h>

#define N 10

int main()
{
    int dizi[N]={5,8,7,6,10,2,1,4,3,9};
    int i, pass;
    int temp;

    for(i=0; i<N; i++)
    {
        printf("dizi[%d]:%d \n", i, dizi[i]);
    }

    //Kabarcik Siralama - Bubble Sort - Kücükten Buyuge Siralama
    for(pass=1; pass< N; pass++)
    {
        for(i=0; i<N-1; i++)
        {
            if(dizi[i] > dizi[i+1])
            {
                temp= dizi[i];
                dizi[i]= dizi[i+1];
                dizi[i+1]=temp;
            }
        }
    }

    printf("\n----------------------\n");
    for(i=0; i<N; i++)
    {
        printf("dizi[%d]:%d \n", i, dizi[i]);
    }

    printf("Hello world!\n");
    return 0;
}
