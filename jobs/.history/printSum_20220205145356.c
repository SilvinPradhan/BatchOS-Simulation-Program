#include <stdio.h>
#include <unistd.h>

int main() {
    int sum = 0, count = 10;
    for (int i = 0; i < count; ) {
        sum = sum+i;
        printf(sum);
    }
    printf(sum);
}