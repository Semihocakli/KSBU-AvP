
void hafta3_fonksiyon_swap(int *aPtr, int *bPtr)
{
   int temp;

        temp = *aPtr;
        *aPtr = *bPtr;
        *bPtr = temp;
}

void hafta3_fonksiyon_hesap(double *sonucPtr, char *islemPtr, int sayi1, int sayi2)
{

   if (*islemPtr == '+')
   {
      *sonucPtr = (double)sayi1 + (double)sayi2;
   }
   else if (*islemPtr == '-')
   {
      *sonucPtr = (double)sayi2 - (double)sayi1;
   }
   else if (*islemPtr == '*')
   {
      *sonucPtr = (double)sayi1 * (double)sayi2;
   }
   else if (*islemPtr == '/')
   {
      *sonucPtr = (double)sayi1 / (double)sayi2;
   }
   else
   {
      *islemPtr = 'N';
      *sonucPtr = 0.0;
   }

}

