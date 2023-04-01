void hafta5_fonksiyon(int dizi[],int diziElemanSayisi, int aykiriDegerler[], double *IQR_Ptr, double *Q1_Ptr, double *Q3_Ptr, int **PtrPtr_AykiriDegerAlt, int **PtrPtr_AykiriDegerUst);
void medyanBul(int *dizi, int diziElemanSayisi, double *medyanPtr);
void diziSiralaKucuktenBuyuge(int *dizi, int diziElemanSayisi);

//dizileri kücükten büyüðe

    int temp;
    for (int i = 0; i < diziElemanSayisi - 1; i++){
        for (int j = 0; j < diziElemanSayisi - i - 1; j++){
            if (dizi[j] > dizi[j + 1]){
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }

// medyan deger

    if(diziElemanSayisi % 2 == 0)
    {
        *medyanPtr = (double)(dizi[diziElemanSayisi / 2 - 1] + dizi[diziElemanSayisi / 2]) / 2;
    }
    else
    {
        *medyanPtr = (double)dizi[diziElemanSayisi / 2];
    }

    *Q1_Ptr = (double)dizi[diziElemanSayisi/4];
    *Q3_Ptr = (double)dizi[3*diziElemanSayisi/4];
    *IQR_Ptr = *Q3_Ptr - *Q1_Ptr;

    double alt_sinir = *Q1_Ptr - 1.5 * (*IQR_Ptr);
    double ust_sinir = *Q3_Ptr + 1.5 * (*IQR_Ptr);

    int aykiriDegerAlt[diziElemanSayisi], aykiriDegerUst[diziElemanSayisi];
    int alt_index = 0, ust_index = 0;
    for(int i = 0; i < diziElemanSayisi; i++) {
        if(dizi[i] < alt_sinir) {
            aykiriDegerAlt[alt_index++] = dizi[i];
        }
        else if(dizi[i] > ust_sinir) {
            aykiriDegerUst[ust_index++] = dizi[i];
        }
    }

    int aykiriDegerSayisi = alt_index + ust_index;

    int *Ptr_AykiriDegerAlt = &aykiriDegerAlt[0];
    int *Ptr_AykiriDegerUst = &aykiriDegerUst[0];
    *PtrPtr_AykiriDegerAlt = Ptr_AykiriDegerAlt;
    *PtrPtr_AykiriDegerUst = Ptr_AykiriDegerUst;

    *aykiriDegerler = aykiriDegerSayisi;

     for(int i = 0; i < aykiriDegerSayisi; i++) {
        for(int j = 0; j < diziElemanSayisi; j++) {
            if(dizi[j] == aykiriDegerler[i]) {
                aykiriDegerler[i] = j;
                break;
            }
        }
        aykiriDegerler[i] = (aykiriDegerler[i] < diziElemanSayisi/2) ? -1 : 1;
    }

    int aykiriDegerSayisi = Ptr_AykiriDegerAlt - aykiriDegerler + Ptr_AykiriDegerUst - aykiriDegerler;

    aykiri_degerleri_bul(dizi, diziElemanSayisi, aykiriDegerler, aykiriDegerSayisi);

    *PtrPtr_AykiriDegerAlt = aykiriDegerler;
    *PtrPtr_AykiriDegerUst = aykiriDegerler + aykiriDegerSayisi - 1;
