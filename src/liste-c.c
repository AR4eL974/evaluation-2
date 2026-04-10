#include "liste-c.h"

struct st_nodeLC{
    int value;
    int* next_node;
};

typedef struct st_nodeLC * nodeLC;