#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b = 0;

    while ( scanf("%lld %lld", &a, &b) == 2) { // för while-satsen tog jag hjälp av kattis tutorial-lösning för a different problem
        printf("%lld\n", llabs(a - b));
    }

    return 0;
}
