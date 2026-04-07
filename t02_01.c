// 12S25055 - Marissa Victoria Silalahi

#include <stdio.h>

struct Transaksi {
    int jumlah;
    float harga;
    float potongan;
    float total;
};

int main(int _argv, char **_argc)
{
    struct Transaksi beli;

    if (scanf("%d", &beli.jumlah) != EOF && scanf("%f", &beli.harga) != EOF) {
        float subtotal = beli.jumlah * beli.harga;
        beli.potongan = 0;

        if (subtotal > 500000) {
            beli.potongan = subtotal * 0.15;
        } else if (subtotal >= 100000) {
            beli.potongan = subtotal * 0.10;
        } else if (subtotal > 50000) {
            beli.potongan = subtotal * 0.05;
        }

        if (beli.potongan > 0) {
            printf("%.2f\n", beli.potongan);
        } else {
            printf("---\n");
        }

        beli.total = subtotal - beli.potongan;
        printf("%.2f\n", beli.total);
    }
  
    return 0;
}