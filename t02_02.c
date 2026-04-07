// 12S25055 - Marissa Victoria Silalahi

#include <stdio.h>

struct Menu {
    int level;
};

int main(int _argv, char **_argc)
{
    struct Menu pilihan;

    if (scanf("%d", &pilihan.level) != EOF) {
        // Daftar makanan (Fall-through logic)
        if (pilihan.level >= 5) printf("milk\n");
        if (pilihan.level >= 4) printf("fruits\n");
        if (pilihan.level >= 3) printf("vegetables\n");
        if (pilihan.level >= 2) printf("side dishes\n");
        if (pilihan.level >= 1) printf("staple food\n");

        // Kesimpulan
        switch (pilihan.level) {
            case 1: printf("you need side dishes\n"); break;
            case 2: printf("you need vegetables\n"); break;
            case 3: printf("good\n"); break;
            case 4: printf("very good\n"); break;
            case 5: printf("perfect\n"); break;
        }
    }
  
    return 0;
}