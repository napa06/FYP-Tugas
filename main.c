#include <stdio.h>
#include <string.h>

int main() {

    char x[10];
    printf("Katakan Halo: ");
    scanf("%s", x);

if (strcmp(x, "Halo") == 0) {
    printf("\nHello, Saya Dev Karel Christanto\n");
    printf("Bahasa Pemograman kesukaan saya sekarang adalah bahasa C\n");
    printf("Karena itu bahasa pertama yang saya pelajari di FYP ini\n");
    } else {
    printf("Halo dulu dong\n");
    }
    return 0;
}
