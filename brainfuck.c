#include <stdio.h>

int main(int argc, char **argv) {

  int x;
  for (x = 0; x <= 10; x++) {
    fprintf(stdout, "Hello %d\n", x);
    fprintf(stderr, "fuck\n");
  }
  
  return 0;
}
