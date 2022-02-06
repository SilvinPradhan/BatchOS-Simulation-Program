#include <stdio.h>
#include <unistd.h>

int main() {
    int n = 10;
    unsigned long long f = 1;
    for (int i; i <= n; ++i) {
        f *= i;
        printf('Factorial of %d = %llu \n', i )
    }


}