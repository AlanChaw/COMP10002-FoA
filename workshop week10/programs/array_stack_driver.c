
#include <stdio.h>

typedef int data_t;
#include "array_stack.c"


int main(){
    Stack_t *s = make_empty_stack();
    push(s, 10);
    push(s, 12);

    pop(s);
    pop(s);
    pop(s);

    return 0;
}
