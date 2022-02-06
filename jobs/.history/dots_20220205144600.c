#include <stdio.h>
#include <unistd.h>
int main() {
  for(int i = 0; i < 50; i++){
    printf(" .");
    fflush(stdout);
    usleep(1000*90);
  }
 printf("\n");
}

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