#include <stdio.h>

int kare(int x) {
    int i, kare, toplam = 0;

    for (i = 1; i <= x; i++) {
        kare = i * i;
        printf("%d sayýsýnýn karesi = %d\n", i, kare);
        toplam += kare; 
    }

    return toplam; 
}

int main() {
    int num, sonuc;

    printf("Lütfen bir sayý giriniz: ");
    scanf("%d", &num);

    sonuc = kare(num);

    return 0;
}

