#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 1; i <= 10 ; i++ ) {
        for (int x= 1; x <= 10 ; x++ ) {
            printf(" %3d ", i * x);
        }

        printf("\n");


    };

    return 0;

};


