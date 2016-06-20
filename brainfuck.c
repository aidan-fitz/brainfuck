#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "vector.h"

int main(int argc, char **argv) {
  if (argc <= 1) {
    printf("Brainfuck v.0.0.1\n\nUsage: ./brainfuck [program_name]\n\n");
    exit(2);
  }

  char *progname = argv[1];
  int program = open(argv[1], O_RDONLY);

  struct vector buffer;
  init(&buffer);

  char cmd;
  while (read(program, &cmd, 1)) {
    //printf("%c\n", cmd);
    switch (cmd) {
      case -1:
      perror(NULL);
      return 1;
      case '+':
      data_up(&buffer);
      break;
      case '-':
      data_down(&buffer);
      break;
      case '>':
      ptr_right(&buffer);
      break;
      case '<':
      ptr_left(&buffer);
      break;
      case ',':
      io_read(&buffer);
      break;
      case '.':
      io_write(&buffer);
      break;
    }
  }

  return 0;
}
