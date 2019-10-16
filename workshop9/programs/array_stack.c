
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define INIT_SIZE 10

typedef struct{
    data_t *data;
    int current_size;
    int top;
} Stack_t;


Stack_t* make_empty_stack(void);
void push(Stack_t *s, data_t element);
void pop(Stack_t *s);
void free_stack(Stack_t *s);


Stack_t* make_empty_stack(void){
    Stack_t *s;
    s = (Stack_t *)malloc(sizeof(*s));
    assert(s != NULL);
    
    s->current_size = INIT_SIZE;
    s->top = -1;
    s->data = (data_t*)malloc(sizeof(data_t)*s->current_size);
    assert(s->dat != NULL);
    
    return s;
}

void push(Stack_t *s, data_t element){
    /* if the stack is full, realloc the memory **/
    if (s->top == s->current_size - 1) {
        s->current_size++;
        s->data=(data_t *)realloc(s->data,s->current_size*sizeof(data_t));
        assert(s->data != NULL);
    }
    s->top += 1;
    s->data[s->top] = element;
}

void pop(Stack_t *s){
    /* if the stack is empty, only do print */
    if (s->top == -1) {
        printf("The stack is empty. \n");
    }
    else{
        s->top--;
    }
}

void free_stack(Stack_t *s){
    free(s->data);
    free(s);
}
