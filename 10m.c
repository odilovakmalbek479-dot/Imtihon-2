#include <stdio.h>
#include <string.h>

struct Mahsulot {
    char nom[50];
    int narx;
    int soni;
};

int main() {
    struct Mahsulot m[5];
    char qidir[50];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d %d", m[i].nom, &m[i].narx, &m[i].soni);
    }
    scanf("%s", qidir);

    for (i = 0; i < 5; i++) {
        printf("%s %d %d\n", m[i].nom, m[i].narx, m[i].soni);
    }

    for (i = 1; i < 5; i++) {
        if (m[i].narx > m[max].narx) {
            max = i;
        }
    }
    printf("Eng qimmat: %s\n\n", m[max].nom);

    for (i = 0; i < 5; i++) {
        if (strcmp(m[i].nom, qidir) == 0) {
            printf("Mahsulot topildi!\n");
            printf("Nomi: %s\n", m[i].nom);
            printf("Narxi: %d\n", m[i].narx);
            printf("Soni: %d\n", m[i].soni);
        }
    }

    FILE *f = fopen("mahsulotlar.txt", "w");
    for (i = 0; i < 5; i++) {
        fprintf(f, "%s %d %d\n", m[i].nom, m[i].narx, m[i].soni);
    }
    fclose(f);

    printf("Ma'lumotlar mahsulotlar.txt fayliga saqlandi.\n");
}