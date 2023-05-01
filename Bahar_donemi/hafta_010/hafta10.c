#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hafta10_fonksiyon1(int **ptrPtr1, int elemanSayisi1) {
    *ptrPtr1 = (int *)malloc(elemanSayisi1 * sizeof(int));
}

void hafta10_fonksiyon2(int *ptr1, int **ptrPtr2, int elemanSayisi1, int elemanSayisi2) {
    srand(time(NULL));

    for (int i = 0; i < elemanSayisi1; i++) {
        ptr1[i] = rand() % 25 + 8;
    }

    *ptrPtr2 = (int *)malloc(elemanSayisi2 * sizeof(int));

    for (int i = 0; i < elemanSayisi1; i++) {
        (*ptrPtr2)[i] = ptr1[i];
    }

    for (int i = elemanSayisi1; i < elemanSayisi2; i++) {
        (*ptrPtr2)[i] = rand() % 55 + 48;
    }
}

