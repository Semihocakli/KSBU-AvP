/* https://leetcode.com/problems/closest-room/ */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int* en_uygun_oda_bul(int** odalar, int n, int** sorgular, int k, int* returnSize) {
    int *sonuc = (int*) malloc(k * sizeof(int));
    *returnSize = k;

    // Odaları oda numarasına göre sıralama

    for (int i = 0; i < k; i++) {
        int tercih_edilen = sorgular[i][0];
        int min_boyut = sorgular[i][1];
        int en_uygun_fark = INT_MAX;
        int en_uygun_oda = -1;

        // Min_boyut'tan büyük veya eşit bir boyuta sahip en yakın odayı bulmak için binary(ikili) araması yapma
        // Buradaki sağ ve sol degiskenleri, arama aralığını belirlemek için kullanılır 
        //https://www.geeksforgeeks.org/binary-search/
        int sol = 0, sag = n - 1;
        while (sol <= sag) {
            int orta = (sol + sag) / 2;
            int *oda = odalar[orta];
            int oda_numarasi = oda[0];
            int oda_boyutu = oda[1];

        if (oda_boyutu < min_boyut) 
        {
                sol = orta + 1;
        } 
        
        else 
        {
            int fark = abs(oda_numarasi - tercih_edilen);

            if (fark < en_uygun_fark || (fark == en_uygun_fark && oda_numarasi < en_uygun_oda)) 
            {
                    en_uygun_fark = fark;
                    en_uygun_oda = oda_numarasi;
            }
                if (oda_numarasi < tercih_edilen) 
                {
                    sol = orta + 1;
                } 
                else 
                {
                    sag = orta - 1;
                }
            }
        }
        sonuc[i] = en_uygun_oda;
    }

    return sonuc;
}

int main() {
    // 2 boyutlu dizilerin oda ve sorgu sayılarını tanımlama
    int n = 5; // Toplam oda sayısı
    int k = 3; // Toplam sorgu sayısı
    printf("\n");

    return 0;
}
