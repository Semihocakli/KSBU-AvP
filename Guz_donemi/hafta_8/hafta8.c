#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

#define N 20

int main()
{
    int min , max, minIndex, maxIndex;
    int dizi[N];
    int i;
    min=INT_MAX;
    max=INT_MIN;

    srand(time(NULL));

    for(i=0; i<N; i++)
    {
        dizi[i]= rand()%10001;
        printf("dizi[%d]:%d\n", i, dizi[i]);
        if(dizi[i]<min)
        {
            min=dizi[i];
            minIndex=i;
        }
        if(dizi[i]>max)
        {
            max=dizi[i];
            maxIndex=i;
        }
    }


    printf("Dizideki Min Deger: %d - Indis:%d\n", min, minIndex);
    printf("Dizideki Max Deger: %d - Indis:%d\n", max, maxIndex);
    printf("-------------------------\n");
    printf("Maximum Integer Value: %d \n",INT_MAX);
    printf("Maximum Integer Value: %d \n",INT_MIN);
    printf("End of Program!\n");
    return 0;
}
