**Hafta 5 Lab Uygulaması** 

***Dosya içerisinde tanımlanacak fonksiyonlar:*** 

/*  Lab icin hafta5_fonksiyon prototipleri: */

- void hafta4_fonksiyon(int *dizi,int diziElemanSayisi, int *maxPtr, int *minPtr, double *medyanPtr, double *ortalamaPtr);
<br>

 dizi: tamsayı dizisi, 
    diziElemanSayisi: gönderilen dizinin kaç elemanlı olduğu
    aykiriDegerler: aykırı değer değilse -1, aykırı değerse 1 değerini alan tamsayı dizisi (eleman sayısı diziElemansayisi ile aynı)
    medyanBul Fonksiyonu: sirali olarak gelen dizi elemanlarini kullanarak medyan değerini hesaplar ve işaretçiyi kullanarak atar.
    Fonskiyon İçinde Yapılacak İşlemler:
    -diziSiralaKucuktenBuyuge fonksiyonunu yazınız.
    -medyanBul fonksiyonunu yazınız. (Geçen hafta yazdığınız algoritmayı fonksiyon haline getirerek çeyrekliklikleri bulurken kullanabilirsiniz.)
    -Diziyi küçükten büyüğe sıralayınız
    -Dizideki aykırı değerleri bulunuz( minor outlier - 1.5xIQR bulmanız yeterli)
    -Aykırı değerleri bulurken hesaplattığınız IQR, Q1 ve Q3 değerlerini işaretçileri kullanarak atayınız.
    -Dizideki verileri kullanarak aykırı olan değerleri barındıran indise göre aykiriDegerler dizisindeki karşılığını -1'den 1'e çeviriniz
    -Çifte işaretçileri kullanarak ana fonksiyonda tanımlı Ptr_AykiriDegerAlt ve Ptr_AykiriDegerUst işaretçilerin adreslerini düzenleyiniz.
    
    //Medyan: https://egitimsozlugu.com/medyan-ortanca-nedir-nasil-bulunur/
    //Uç-Aykırı (outlier) değer hesaplama: https://www.wikihow.com.tr/U%C3%A7-De%C4%9Ferler-Nas%C4%B1l-Hesaplan%C4%B1r 
    //(Test amaçlı kullanabilirsiniz) Aykırı değer hesaplama aracı: https://miniwebtool.com/outlier-calculator/ 
    //Ptr_AykiriDegerAlt: Alt Aykırı değerlerin en büyüğü - daha küçük değerlerin hepsi aykırı değer
    //Ptr_AykiriDegerUst: Ust Aykırı değerlerin en küçüğü - daha büyük değerlerin hepsi aykırı değer
    //PtrPtr_AykiriDegerAlt: Ptr_AykiriDegerAlt işaretçisini gösteren işaretçi (çifte işaretçi)
    //PtrPtr_AykiriDegerUst: Ptr_AykiriDegerUst işaretçisini gösteren işaretçi (çifte işaretçi)
                
<br>




    
