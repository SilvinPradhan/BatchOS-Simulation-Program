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
