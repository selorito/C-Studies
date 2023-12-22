#include <stdio.h>

int main() {
    int i, dizi[50], a;

    printf("Dizinin kac adimdan olusmasini istersiniz : ");
    scanf("%d", &a);

    dizi[0] = 9;

    for (i = 1; i < a; i++) {
        if (i % 2 == 1) {
            // Tek indis durumunda 5 artýþ
            dizi[i] = dizi[i - 1] + 5;
        } else {
            // Çift indis durumunda 4 artýþ
            dizi[i] = dizi[i - 1] + 4;
        }
    }

    for (i = 0; i < a; i++) {
        printf("%d\n", dizi[i]);
    }

    return 0;
}

