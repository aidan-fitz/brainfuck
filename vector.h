#include <sys/types.h>

struct vector {
  size_t size;
  char *data;
  size_t i;
};

void init(struct vector *);

void data_up(struct vector *);

void data_down(struct vector *);

void ptr_right(struct vector *);

void ptr_left(struct vector *);

void io_read(struct vector *);

void io_write(struct vector *);
