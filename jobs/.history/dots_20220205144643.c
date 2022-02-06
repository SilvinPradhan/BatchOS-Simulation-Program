#include <stdio.h>
#include <unistd.h>


void displayDots(int n) {
    for( int i= 0; i< n; i++) {
        printf(" .");
        fflush(stdout);
    usleep(1000*90);
    }
}

int main() {
    int n = 50;
    displayDots(n);
    return 0;
}