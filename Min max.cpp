#include <stdio.h>

int main() {
    int matrix[5][5];

    // Kullanýcýdan matrisi al
    printf("5x5 matrisin elemanlarini giriniz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Matris[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // En küçük ve en büyük deðerleri bulma
    int minVal = matrix[0][0], maxVal = matrix[0][0];
    int minRow = 0, minCol = 0, maxRow = 0, maxCol = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];
                minRow = i;
                minCol = j;
            }
            if (matrix[i][j] > maxVal) {
                maxVal = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Sonuçlarý ekrana yazdýrma
    printf("En küçük deðer: %d, Satýr: %d, Sütun: %d\n", minVal, minRow, minCol);
    printf("En büyük deðer: %d, Satýr: %d, Sütun: %d\n", maxVal, maxRow, maxCol);

    return 0;
}

