#include <stdio.h>
#include <unistd.h>


void displayDots(int n) {
    for( int i= 0; i< n; i++) {
        cout << "* ";
        fflush(stdout);
    usleep(1000*90);
    }
    cout << endl;
}

int main() {
    int n = 50;
    displayDots(n);
    return 0;
}