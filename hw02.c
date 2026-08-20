#include <stdio.h>
#include <math.h>

int main() {
    long long L1=0;
    long long L2=0;
    long long D=0;
    char mode;

    printf("Track length:\n");
    if (scanf("%lld %lld", &L1, &L2) != 2 || L1 <= 0 || L2 <= 0 || L1 == L2) {
        printf("Invalid input.\n");
        return 0;
    }

    printf("Distance:\n");
    while (1) {
        int res = scanf(" %c %lld", &mode, &D);

        if (res == EOF) {
            break;
        }

        if (res != 2 || (mode != '+' && mode != '-') || D < 0) {
            printf("Invalid input.\n");
            return 0;
        }

        long long variants = 0;
        for (long long i=0; i*L1<=D; i++) {
            long long ED = D - (i * L1);
            if ( ED % L2 == 0) {
                variants ++;
                long long j= ED/L2;
                if (mode =='+'){printf("= %lld * %lld + %lld * %lld\n", L1, i, L2, j);}
            }
        }
        printf("Total: %lld\n", variants);
    }

    return 0;
}