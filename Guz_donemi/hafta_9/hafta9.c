#include <stdio.h>
#include <stdlib.h>
#define SIZE 35

void diziyazdir(int dizi[])
{

    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d index: %d\n",i, dizi[i]);
    }
        printf("------------------\n");

}
void diziyisirala(int dizi[])
{

    int i,j,k;
    for(j=0;j<SIZE;j++)
    {
        for(i=0;i<SIZE-1;i++)
        {
            if(dizi[i+1]<dizi[i])
            {
                    k = dizi[i+1];
                    dizi[i+1]=dizi[i];
                    dizi[i]=k;
            }
        }
    }
    diziyazdir(dizi);
}

void tekolanlariartir(int dizi[])
{

    int i;
    for(i=0;i<SIZE;i++)
    {
        if(dizi[i]%2 == 1)
        {
                dizi[i]++;
        }
    }
    diziyazdir(dizi);
}

void ara72(int dizi[])
{

    int i;
    for(i=0;i<SIZE;i++)
    {
        if(dizi[i]== 72)
        {
            printf("72 sayisinin oldugu index: %d\n",i);
        }
    }

}


int main()
{
    // 45 ile 86 arasýnda 35 tane deger rastgele kücükten büyüðe sýralama fonlsiyonda sýrala
    //dizinin tek elemanlarýný bir artýr ikincisi 72'yi ara hangi indexte olduðunu bul

    srand(time(NULL));

    int dizi[SIZE];
    int i;

    for(i=0;i<SIZE;i++)
    {
        dizi[i]=(rand()% (87-45))+45;
    }

    printf("ilk dizi: \n");
    diziyazdir(dizi);

    printf("siralanmis dizi: \n");
    diziyisirala(dizi);

    printf("tek olanlarin 1 arttirildigi dizi");
    tekolanlariartir(dizi);

    ara72(dizi);

    return 0;
}
