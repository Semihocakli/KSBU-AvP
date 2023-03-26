void hafta4_fonksiyon(int *dizi, int diziElemanSayisi, int *maxPtr, int *minPtr, double *medyanPtr, double *ortalamaPtr)
{
    int i, j, temp;
    double ortalama, medyan;


    int toplam = 0;
    for (i = 0; i < diziElemanSayisi; i++) {
        toplam += dizi[i];
    }
    ortalama = (double) toplam / diziElemanSayisi;
    *ortalamaPtr = ortalama;


    int *sorted = malloc(sizeof(int) * diziElemanSayisi);
    for (i = 0; i < diziElemanSayisi; i++) {
        sorted[i] = dizi[i];
    }
    for (i = 0; i < diziElemanSayisi; i++) {
        for (j = i + 1; j < diziElemanSayisi; j++) {
            if (sorted[i] > sorted[j]) {
                temp = sorted[i];
                sorted[i] = sorted[j];
                sorted[j] = temp;
            }
        }
    }

    if (diziElemanSayisi % 2 == 0)
    {
        medyan = (double) (sorted[diziElemanSayisi / 2 - 1] + sorted[diziElemanSayisi / 2]) / 2.0;
    }

    else
    {
        medyan = sorted[diziElemanSayisi / 2];
    }
        *medyanPtr = medyan;

    int maxIndex = 0, minIndex = 0;

    for (i = 0; i < diziElemanSayisi; i++)
    {
        if (dizi[i] > dizi[maxIndex])
        {
            maxIndex = i;
        }
        if (dizi[i] < dizi[minIndex])
        {
            minIndex = i;
        }
    }

    temp = dizi[diziElemanSayisi-1];
    dizi[diziElemanSayisi-1] = dizi[maxIndex];
    dizi[maxIndex] = temp;

    temp = dizi[0];
    dizi[0] = dizi[minIndex];
    dizi[minIndex] = temp;

    *maxPtr = dizi[diziElemanSayisi-1];
    *minPtr = dizi[0];



