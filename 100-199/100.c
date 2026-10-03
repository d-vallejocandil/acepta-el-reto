#include <stdio.h>
#include <stdlib.h>

int compararasc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int comparardesc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int a;
    scanf("%d", &a);
    while (a--) {
        int b;
        scanf("%d", &b);
        int c[4];
        c[0] = b / 1000;
        c[1] = (b / 100) % 10;
        c[2] = (b / 10) % 10;
        c[3] = b % 10;
        if (c[0] == c[1] && c[1] == c[2] && c[2] == c[3]) {
            printf("8\n");
            continue;
        }
        int d = 0;
        while (b != 6174) {
            qsort (c, 4, sizeof (int), comparardesc);
            int e = c[0] * 1000 + c[1] * 100 + c[2] * 10 + c[3];
            qsort (c, 4, sizeof (int), compararasc);
            int f = c[0] * 1000 + c[1] * 100 + c[2] * 10 + c[3];
            b = e - f;
            d++;
            c[0] = b / 1000;
            c[1] = (b / 100) % 10;
            c[2] = (b / 10) % 10;
            c[3] = b % 10;
        }
        printf("%d\n", d);
    }
    return 0;
}