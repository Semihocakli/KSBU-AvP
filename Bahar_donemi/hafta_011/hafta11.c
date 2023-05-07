#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void hafta11_fonksiyon(int *frequencyList, char *FileName, int *mostFrequentLetter, char **InStrPtr) {
    // Dosya açma işlemi
    FILE *fp; 
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Dosya acilamadi.\n");
        return;
    } else {
        // Dosyanın boyutunu bulmak için dosyayı baştan sona okuyun
        fseek(fp, 0L, SEEK_END);
        int fileSize = ftell(fp);
        rewind(fp);

        // Bellekte dosya boyutu kadar yer ayirma ve dosyayi buraya kopyalama
        char *fileContent = malloc(fileSize + 1);
        fread(fileContent, fileSize, 1, fp);
        fclose(fp); 

        // Son karakteri null karakteri ile değistirme
        fileContent[fileSize] = '\0';

        // Her harfin frekansini hesaplama ve frekans listesine atama
        for (int i = 0; i < fileSize; i++) {
            char c = tolower(fileContent[i]);
            if (isalpha(c)) {
                frequencyList[c - 'a']++;
            }
        }

        // En çok tekrarlanan harf
        int maxFrequency = 0;
        for (int i = 0; i < 26; i++) {
            if (frequencyList[i] > maxFrequency) {
                maxFrequency = frequencyList[i];
                *mostFrequentLetter = i;
            }
        }
        //  en çok tekrarlanan harfin küçük harfe dönüştürme
        *mostFrequentLetter += 'a';

        // Girdi string işaretçisi değişkenine dosya içeriğinin başlangıç adresini atama
        *InStrPtr = fileContent;
    }
}
