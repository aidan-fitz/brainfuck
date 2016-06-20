#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "vector.h"

int main(int argc, char **argv) {
  if (argc <= 1) {
    printf("Brainfuck v.0.0.1\n\nUsage: ./brainfuck [program_name]\n");
    exit(2);
  }

  char *progname = argv[1];
  int program = open(argv[1], O_RDONLY);

  struct vector buffer;
  init(&buffer);


  return 0;
}
