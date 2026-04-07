// 12S25055 - Marissa Victoria Silalahi

#include <stdio.h>

struct Kalkulator {
    char op;
    int nilai_jalan;
    int input_user;
};

int main(int _argv, char **_argc)
{
    struct Kalkulator kalk;
    int i;

    // Input operator pertama
    if (scanf(" %c", &kalk.op) != EOF) {
        printf("%c\n", kalk.op);

        // Inisialisasi awal sesuai aturan
        if (kalk.op == '*') {
            kalk.nilai_jalan = 1;
        } else {
            kalk.nilai_jalan = 0;
        }

        // Loop untuk input bilangan (maksimal 4 angka berikutnya agar total input < 5 atau sesuai -1)
        for (i = 0; i < 4; i++) {
            if (scanf("%d", &kalk.input_user) == EOF) break;

            if (kalk.input_user == -1) {
                printf("-1\n0\n");
                return 0;
            }

            if (kalk.op == '+') {
                kalk.nilai_jalan += kalk.input_user;
            } else if (kalk.op == '-') {
                kalk.nilai_jalan -= kalk.input_user;
            } else if (kalk.op == '*') {
                kalk.nilai_jalan *= kalk.input_user;
            }

            printf("%d\n%d\n", kalk.input_user, kalk.nilai_jalan);
        }
    }
  
    return 0;
}