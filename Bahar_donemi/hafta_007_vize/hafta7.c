#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void diziyiKucuktenBuyugeSirala(int *dizi, int *elemanSayisi);
void sifirla(int *islemeAlinanDegerlerFlag, int *elemanSayisi);

void sifirla(int *islemeAlinanDegerlerFlag, int *elemanSayisi) {
for (int i = 0; i < *elemanSayisi; i++) {
islemeAlinanDegerlerFlag[i] = 0;
}
}



void diziyiKucuktenBuyugeSirala(int *dizi, int *elemanSayisi) {
int temp, i, j;

for (i = 0; i < *elemanSayisi - 1; i++) {
for (j = i + 1; j < *elemanSayisi; j++) {
    if (dizi[i] > dizi[j]) {
        temp = dizi[i];
        dizi[i] = dizi[j];
        dizi[j] = temp;
    }
}
}
}

void hafta7_fonk(int dizi[], int elemanSayisi, int yuzdelikDeger,
        double *Q1ptr, double *Q3ptr, double *IQRptr,
        double *OrtPtr, double *ptr_esikDegeri_Alt, double *ptr_esikDegeri_Ust,
        int *islemeAlinanDegerlerFlag, double *ptr_IADT, int *ptrArray[]) {



diziyiKucuktenBuyugeSirala(dizi, &elemanSayisi);
int indeks1 = (int)(elemanSayisi * 0.25);
int indeks2 = (int)(elemanSayisi * 0.75);


*Q1ptr = dizi[indeks1];


*Q3ptr = dizi[indeks2];


*IQRptr = *Q3ptr - *Q1ptr;


double alt = 0;
double ust = 0;
double birimIQR = 1.5 * (*IQRptr);

alt = *Q1ptr - birimIQR;
ust = *Q3ptr + birimIQR;


sifirla(islemeAlinanDegerlerFlag, &elemanSayisi);
for (int i = 0; i < elemanSayisi; i++){
if (dizi[i] >= alt && dizi[i] <= ust)
    islemeAlinanDegerlerFlag[i] = 1;
}


int toplam = 0;
int temp = 0;
int i = 0;

while (i < elemanSayisi) {
if (islemeAlinanDegerlerFlag[i] == 1) {
toplam = toplam + dizi[i];
temp++;
}
i++;
}

*OrtPtr = (double)toplam / temp;
*ptr_esikDegeri_Alt = *OrtPtr - ((*OrtPtr * yuzdelikDeger) / 100.0);
*ptr_esikDegeri_Ust = *OrtPtr + ((*OrtPtr * yuzdelikDeger) / 100.0);


sifirla(islemeAlinanDegerlerFlag, &elemanSayisi);

for (int i = indeks1; i <= indeks2; i++) {
islemeAlinanDegerlerFlag[i] = 1;

*ptr_IADT = 0;
for (int j = 0; j < elemanSayisi; j++) {
if (islemeAlinanDegerlerFlag[j] == 1) {

    *ptr_IADT = *ptr_IADT + dizi[j];
}
}

for (int j = 0; j < elemanSayisi; j++) {
if (dizi[j] > *ptr_esikDegeri_Alt && dizi[j] < *ptr_esikDegeri_Ust) {
    ptrArray[j] = &dizi[j];
    islemeAlinanDegerlerFlag[j] = 1;
}
}


for (int i = 1; i < elemanSayisi; i++) {
if (islemeAlinanDegerlerFlag[i] == 1 && dizi[i] == dizi[i - 1]) {
ptrArray[i] = 0;
}
}
