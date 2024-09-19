#include <stdio.h>

int main(void) {
    printf("Ahoj, napis mi prvni cislo, se kterym chces pocitat. \n");
    float a;
    scanf("%f", &a);
    printf("Ted mi napis druhe cislo. \n");
    float b;
    scanf("%f", &b);
    printf("Co s temi cisly chces udelat? (Napis cislo poradi) \n 1) Scitani \n 2) Odecitani \n 3) Deleni \n 4) Nasobeni \n ");
    int operace;
    scanf("%d", &operace);
    switch (operace) {
        case 1:
            printf("%f", a+b);
        break;
        case 2:
            printf("%f", a-b);
        break;
        case 3:
            printf("%f", a/b);
        break;
        case 4:
            printf("%f", a*b);
        break;

        default: printf("Napsal jsi neco spatne.");
        return 1;
    }
    return 0;
}