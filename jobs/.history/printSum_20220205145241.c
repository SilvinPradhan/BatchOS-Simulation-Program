#include <stdio.h>
#include <unistd.h>

int main() {
    int sum = 0, count = 10;
    for (int i = 0; i < count; i++) {
        sum = sum+i;
        printf(sum %s);
    }
    printf(sum);
}