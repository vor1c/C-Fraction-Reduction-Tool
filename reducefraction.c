#include <stdio.h>

void reduce(int*,int*);
int ggt(int,int);

// Funktion zur Berechnung des ggT von a und b
int ggt(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Funktion zur Kürzung des Bruchs
void reduce(int *n, int *d) {
    int divisor = ggt(*n, *d);
    *n /= divisor;
    *d /= divisor;
}

int main() {
    int n = 24;
    int d = 12;

    printf("Vor der Kurzung: %d/%d\n", n, d);

    reduce(&n, &d);

    printf("Nach der Kurzung: %d/%d\n", n, d);

    return 0;
}
