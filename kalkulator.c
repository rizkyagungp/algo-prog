#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2, num3, hasil;
    char op1, op2;

    // Inputan ekspresi dari pengguna
    printf("Masukkan perhitungan aritmatika (misal: 3 + 4 * 2): ");
    scanf("%f %c %f %c %f", &num1, &op1, &num2, &op2, &num3);

    // Menentukan prioritas operator
    if (op2 == '*' || op2 == '/') {
        // Hitung dengan operator prioritas tinggi terlebih dahulu
        if (op2 == '*') {
            num2 = num2 * num3;
        } else {
            num2 = num2 / num3;
        }
        // Kemudian hitung sisa ekspresi
        if (op1 == '+') {
            hasil = num1 + num2;
        } else {
            hasil = num1 - num2;
        }
    } else {
        // Jika op1 adalah '*' atau '/'
        if (op1 == '*') {
            num1 = num1 * num2;
        } else if (op1 == '/') {
            num1 = num1 / num2;
        } else {
            // Jika op1 adalah '+' atau '-'
            if (op2 == '+') {
                num2 = num2 + num3;
            } else {
                num2 = num2 - num3;
            }
            // Menghitung sisa ekspresi
            if (op1 == '+') {
                hasil = num1 + num2;
            } else {
                hasil = num1 - num2;
            }
            // Menampilkan hasilnya
            printf("Hasil: %.2f\n", hasil);
            return 0;
        }
        // Hitung sisa ekspresi
        if (op2 == '+') {
            hasil = num1 + num3;
        } else {
            hasil = num1 - num3;
        }
    }
    // Menampilkan hasilnya
    printf("Hasil: %.2f\n", hasil);
    return 0;
}
