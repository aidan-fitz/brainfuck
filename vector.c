#include <stdlib.h>
#include <unistd.h>

#include "vector.h"

/**
 * Fills the vector with new data
 */
void init(struct vector *vec) {
  // Traditionally the vector size is 2^15 bytes
  vec->size = 1 << 15;
  vec->data = calloc(vec->size, 1);
  vec->i = 0;
}

void data_up(struct vector *vec) {
  vec->data[vec->i]++;
}

void data_down(struct vector *vec) {
  vec->data[vec->i]--;
}

void ptr_right(struct vector *vec) {
  vec->i++;
  if (vec->i < 0) {
    vec->i -= vec->size;
  }
}

void ptr_left(struct vector *vec) {
  vec->i--;
  if (vec->i < 0) {
    vec->i += vec->size;
  }
}

void io_read(struct vector *vec) {
  read(STDIN_FILENO, vec->data + vec->i, 1);
}

void io_write(struct vector *vec) {
  write(STDOUT_FILENO, vec->data + vec->i, 1);
}
