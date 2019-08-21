
# include <stdio.h>

int main(){
    int a = 3;
    int* p = &a;

    printf("%d\n", *p);
    printf("%p\n", p);
    
    return 0;
}

