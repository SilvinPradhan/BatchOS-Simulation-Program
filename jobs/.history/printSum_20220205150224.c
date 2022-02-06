#include <stdio.h>
#include <unistd.h>

int main() {
    int sum = 0, count = 10;
    for (int i = 0; i < count; ++i) {
        sum = sum+i;
        printf("\n Sum = 1 to %d = %d", i, sum);
    }
    printf("\n");
    printf("%s\nsum);
}