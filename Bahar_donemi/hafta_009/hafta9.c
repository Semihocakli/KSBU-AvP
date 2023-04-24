void hafta9_fonksiyon(int *dizi, int elemanSayisi, void *isareciDizi[], int *TekElemanSayisi, int *ciftElemanSayisi, int tekSayiDizisi[], int ciftSayiDizisi[]) {

    int i, j, gecici;
    int ciftIndex = 0, tekIndex = 0;
    int *ciftDizi = (int*)malloc(elemanSayisi * sizeof(int));
    int *tekDizi = (int*)malloc(elemanSayisi * sizeof(int));

    // orjinal diziyi cift ve tek degerlerine ayirdim
    for (i = 0; i < elemanSayisi; i++) 
    {
        if (dizi[i] % 2 == 0) 
        {
            ciftDizi[ciftIndex] = dizi[i];
            ciftIndex++;
        }
        else 
        {
            tekDizi[tekIndex] = dizi[i];
            tekIndex++;
        }
    }

    // tek degerler dizisini kucukten buyuge siraladim
    for (i = 0; i < tekIndex-1; i++) 
    {
        for (j = i+1; j < tekIndex; j++) 
        {
            if (tekDizi[i] > tekDizi[j]) 
            {
                gecici = tekDizi[i];
                tekDizi[i] = tekDizi[j];
                tekDizi[j] = gecici;
            }
        }
    }

    // cift degerler dizisini buyukten kucuge siralayin
    for (i = 0; i < ciftIndex-1; i++) 
    {
        for (j = i+1; j < ciftIndex; j++) 
        {
            if (ciftDizi[i] < ciftDizi[j]) 
            {
                gecici = ciftDizi[i];
                ciftDizi[i] = ciftDizi[j];
                ciftDizi[j] = gecici;
            }
        }
    }

    // tek ve cift eleman sayisini hesaplama
    *TekElemanSayisi = tekIndex;
    *ciftElemanSayisi = ciftIndex;

    // tek degerler dizisini tekSayiDizisi'ne kopyalama
    for (i = 0; i < tekIndex; i++) {
        tekSayiDizisi[i] = tekDizi[i];
    }

    // cift degerler dizisini ciftSayiDizisi'ne kopyalama
    for (i = 0; i < ciftIndex; i++) {
        ciftSayiDizisi[i] = ciftDizi[i];
    }

    // isaretciler dizisine orjinal dizi adreslerine atama
    int index = 0;
    for (i = 0; i < ciftIndex; i++) 
    {
        isareciDizi[index] = &dizi[i];
        index += 2;
    }
    index = 1;
    for (i = 0; i < tekIndex; i++) 
    {
        isareciDizi[index] = &dizi[i];
        index += 2;
    }

    // cift ve tek eleman sayisi ile orjinal dizinin eleman sayisini karsilastirdim, tek ise son elemani isaretciler dizisine atadım
    if (elemanSayisi % 2 == 1) 
    {
        if (*ciftElemanSayisi > *TekElemanSayisi) 
        {
            isareciDizi[elemanSayisi-1] = &ciftDizi[ciftIndex-1];
        }
        else 
        {
         isareciDizi[elemanSayisi-1] = &tekDizi[tekIndex-1];
        }
    }
}
