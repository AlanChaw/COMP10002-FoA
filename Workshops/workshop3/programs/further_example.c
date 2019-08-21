
# include <stdio.h>


void myfunc(int *pointer){
    *pointer = *pointer + 1;
    
    int b = 10;
    pointer = &b;
    *pointer = *pointer + 1;
}

int main(){
    int a = 3;
    int* p = &a;

    printf("Before pass to function: %d\n", a);
    myfunc(p);
    printf("After executed of function: %d\n", a);

    return 0;
}

