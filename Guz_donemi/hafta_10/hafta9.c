#include <stdio.h>
#include <time.h>

#define WIDTH 1920
#define HEIGHT 1080

int main(void) {

    int rgbdizisi[WIDTH][HEIGHT][3];
    int i,j,k;
    srand(time(NULL));

    for (i=0;i<WIDTH;i++)
        {
        for (j=0;j<HEIGHT;j++)
         {
            for (k=0;k<3;k++)
             {
                rgbdizisi[i][j][k] = rand()%256;
            }
        }
    }

    return 0;
}
