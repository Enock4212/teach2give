/*Write a program to generate the Fibonacci sequence up to 100.*/


#include <stdio.h>

int main() {
    int i, n;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %lld, %lld, ", t1, t2);

    for (i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%lld, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}