

#include <stdio.h>
#include <stdlib.h>



int main(){
    char* p = (char *)malloc(100);
    printf("%p\n", p);
    
    char* q = (char *)realloc(p, 80);
    printf("%p\n", q);
    
}
