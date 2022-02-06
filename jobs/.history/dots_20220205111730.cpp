//	Program that prints 50 dots
#include <iostream>
using namespace std;

void displayDots(int n) {
    for( int i= 0; i< n; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int n = 50;
    displayDots(n);
    return 0;
}