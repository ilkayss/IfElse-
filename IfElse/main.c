#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
     
     int sayi1, sayi2;
     srand(time(NULL)); //Her seferinde farkli degerler uretecek
     sayi1 = rand() % 100;
     sayi2 = rand() % 100;
     
     printf("Birinci sayi : %d Ikinci sayi : %d \n", sayi1, sayi2);
     
     if (sayi1<sayi2) {
          printf("%d sayisi %d sayisindan kucuktur\n" , sayi1,sayi2);
     }else if (sayi1 > sayi2){
          printf("%d sayisi %d sayisindan buyuktur\n" , sayi1 , sayi2);
     }else
          printf("%d ve %d sayilari birbirine esittir...\n" , sayi1 , sayi2);
}
