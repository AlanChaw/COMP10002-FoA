
# include <stdio.h>


void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main(){
    int x = 2, y = 3;
    swap(&x, &y);
    printf("after swap: x=%d, y=%d\n", x, y);
    
}

//void myfunc(int *pointer){
//
//}
//
//int main(){
//    int a = 3;
//    int* p = &a;
//
//    printf("Before pass to function: %d\n", a);
//    myfunc(p);
//    printf("After executed of function: %d\n", a);
//
//    return 0;
//}

