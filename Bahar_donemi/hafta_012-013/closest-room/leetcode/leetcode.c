/* https://leetcode.com/problems/closest-room/ */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Odayı bulma fonksiyonu
/*
    odalar = Odaların bilgilerini içeren 2D pointer dizisi. -> odaların bilgileri için
    odaSayisi = Odaların toplam sayısı. ->  kaç odanın olduğunu iletmek için
    odalarSutunSayisi = Odalar dizisinin her bir satırının sütun sayısını tutan pointer dizi.
    tercihEdilen =  Sorguda tercih edilen oda numarası.
    minBoyut = Sorguda istenen minimum oda boyutu.
*/
int enYakinOdayiBul(int** odalar, int odaSayisi, int* odalarSutunSayisi, int tercihEdilen, int minBoyut) {
    int enYakinOda = -1; // En yakın oda numarası
    int minFark = INT_MAX; // En küçük fark değeri

    // Odaları döngüyle gezme
    for (int i = 0; i < odaSayisi; i++) {
        int odaId = odalar[i][0]; // Oda numarası
        int odaBoyutu = odalar[i][1]; // Oda boyutu
/*
    https://www.geeksforgeeks.org/binary-search/
*/
        // Oda boyutu minBoyut'tan büyük veya eşitse
        if (odaBoyutu >= minBoyut) {
            int fark = abs(odaId - tercihEdilen); // Oda numarası ile tercihEdilen arasındaki fark

            // Eğer bu oda daha yakınsa
            if (fark < minFark) {
                minFark = fark; // Yeni minimum fark değerini güncelle
                enYakinOda = odaId; // En yakın oda numarasını güncelle
            }
            // Eğer farklar eşitse ve bu oda daha küçük numaralıysa
            else if (fark == minFark && odaId < enYakinOda) {
                enYakinOda = odaId; // En yakın oda numarasını güncelle
            }
        }
    }

    return enYakinOda; // En yakın oda numarasını döndür
}

// Sorguları işleme fonksiyonu
int* enYakinOda(int** odalar, int odaSayisi, int* odalarSutunSayisi, int** sorgular, int sorguSayisi, int* sorgularSutunSayisi, int* sonucBoyutu) {
    int* sonuc = (int*)malloc(sorguSayisi * sizeof(int)); // Sonuç dizisi için bellek ayır

    // Her bir sorguyu işleME
    for (int i = 0; i < sorguSayisi; i++) {
        int tercihEdilen = sorgular[i][0]; // Sorgu için tercih edilen oda numarası
        int minBoyut = sorgular[i][1]; // Sorgu için minimum oda boyutu

        // En yakın odayı bul ve sonuç dizisine ekle
        sonuc[i] = enYakinOdayiBul(odalar, odaSayisi, odalarSutunSayisi, tercihEdilen, minBoyut);
    }

    *sonucBoyutu = sorguSayisi; // Sonuç dizisinin boyutunu güncelle
    return sonuc; // Sonuç dizisini döndür
}

int main() {
    int odalar[][2] = {{2, 2}, {1, 2}, {3, 2}}; // Bizdeki odaların numaraları ve boyutları
    int sorgular[][2] = {{3, 1}, {3, 3}, {5, 2}}; // Müşterinin sorgularının tercihleri ve minimum boyutları
    int odaSayisi = sizeof(odalar) / sizeof(odalar[0]); // Odaların sayısı
    int sorguSayisi = sizeof(sorgular) / sizeof(sorgular[0]); // Sorguların sayısı

    int** odalarPtr = (int**)malloc(odaSayisi * sizeof(int*)); // Odalar dizisi için bellek ayırma
    for (int i = 0; i < odaSayisi; i++) {
        odalarPtr[i] = odalar[i]; // Odaların pointerlarını atama
    }

    int** sorgularPtr = (int**)malloc(sorguSayisi * sizeof(int*)); // Sorgular dizisi için bellek ayırma
    for (int i = 0; i < sorguSayisi; i++) {
        sorgularPtr[i] = sorgular[i]; // Sorguların pointerlarını atama
    }

    int odalarSutunSayisi[] = {2, 2, 2}; // Odalar dizisinin her bir satırının sütun sayıları
    int sorgularSutunSayisi[] = {2, 2, 2}; // Sorgular dizisinin her bir satırının sütun sayıları

    int sonucBoyutu; // Sonuç dizisinin boyutu
    int* sonuc = enYakinOda(odalarPtr, odaSayisi, odalarSutunSayisi, sorgularPtr, sorguSayisi, sorgularSutunSayisi, &sonucBoyutu); // Sorguları işle

  
    for (int i = 0; i < sonucBoyutu; i++) {
        printf("%d", sonuc[i]); // Sonucu ekrana yazdır
        if (i != sonucBoyutu - 1) {
            printf(", ");
        }
    }
/*
     İlk sorgu için 3 numaralı oda en yakın olandır ve istenen minimum boyutu sağlamaktadır. 
     İkinci sorgu için ise uygun bir oda bulunamamıştır, bu yüzden -1 değeri döndürülmüştür. 
     Üçüncü sorgu için 3 numaralı oda en yakın olandır ve istenen minimum boyutu sağlamaktadır. 
     *Verilen kodun çıktısı, örnek girişlere göre hesaplanan sonuçlar üzerinden oluşturulacak bir çıktıdır.*
*/

    free(sonuc); // Sonucun tuttuğu belleği serbest bırak
    free(odalarPtr); // Odalar dizisinin tuttuğu belleği serbest bırak
    free(sorgularPtr); // Sorgular dizisinin tuttuğu belleği serbest bırak

    return 0;
}
