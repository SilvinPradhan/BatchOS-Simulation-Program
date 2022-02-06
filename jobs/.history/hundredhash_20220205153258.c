#include <stdio.h>

int main(void) {
    int c = 100;
    for(int i = 1; i <= c; i++) {
        printf("%c", 35);
        if(i % 10 ==0) {
            printf("\n");
        }
    }
}
