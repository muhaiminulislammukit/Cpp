#include <stdio.h>

int min(int a, int b, int c) {
    int m = a;

    if (b < m)
        m = b;

    if (c < m)
        m = c;

    return m;
}

int max(int a, int b, int c) {
    int m = a;

    if (b > m)
        m = b;

    if (c > m)
        m = c;

    return m;
}

int main() {
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);

    printf("%d %d\n", min(A, B, C), max(A, B, C));

    return 0;
}