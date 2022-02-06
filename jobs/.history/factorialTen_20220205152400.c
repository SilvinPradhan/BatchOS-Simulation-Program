#include <stdio.h>
#include <unistd.h>

int main() {
    int n = 10;
    int f = 1;
    for (int i =1; i <= n; i++) {
        f *= i;
        printf("Factorial of %d : %d \n", i, f);
    }
    printf("\n");
}