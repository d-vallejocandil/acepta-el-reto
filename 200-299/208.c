#include <stdio.h>

int main() {
    long long a, b;
    while(1) {
        scanf("%lld %lld", &a, &b);
        if(a == 0 && b == 0) {
            break;
        }
        if(b == 1) {
            printf("0\n");
        } else {
            long long c = a * (a + 1) / 2;
            long long d = a - b + 1;
            d = d * (d + 1) / 2;
            printf("%lld\n", c-d);
        }
    }
    return 0;
}