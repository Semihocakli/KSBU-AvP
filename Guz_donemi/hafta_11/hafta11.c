#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void yazi_gir() {
  char dizi[30];

  printf("Lutfen en fazla 30 karakterlik bir yazi  girin: ");

  fgets(dizi, sizeof(dizi), stdin);

  printf("Girilen yazi: %s\n", dizi);

  char harf;

  printf("Lutfen bir harf girin: ");

  scanf(" %c", &harf);

  int karaktersay = 0;

  for (int i = 0; i < strlen(dizi); i++) {

    if (dizi[i] == harf) {

      karaktersay++;

    }

  }

  printf("Girilen yazida %c harfi %d kere kullanilmis.\n", harf, karaktersay);

  printf("Girilen yazinin uzunlugu: %ld karakter.\n", strlen(dizi));
}

int main(void) {
  yazi_gir();
  return 0;
}
