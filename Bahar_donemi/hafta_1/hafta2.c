#include <stdio.h>
#include <stdlib.h>

void hafta2_fonksiyon(char yazi[],int yaziBoyutu,int kaymaMiktari)
{
    int i,j;
    char temp;
    kaymaMiktari = kaymaMiktari % yaziBoyutu;

    if(kaymaMiktari > 0)
    {
        for(i=0;i<kaymaMiktari;i++)
        {
            temp = yazi[yaziBoyutu-1];

            for(j=yaziBoyutu-1; j>0; j--)
            {
                yazi[j]=yazi[j-1];
            }
            yazi[0]=temp;
        }
    }

    else if(kaymaMiktari < 0)
    {
        kaymaMiktari= -kaymaMiktari;

        for(i=0;i<kaymaMiktari;i++)
        {
            temp=yazi[0];

            for(j=0;j<yaziBoyutu-1;j++)
            {
                yazi[j]=yazi[j+1];
            }
            yazi[yaziBoyutu-1]= temp;
        }
    }
}


