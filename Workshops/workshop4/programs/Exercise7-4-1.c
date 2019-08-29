

#include <stdio.h>

int main(){
    
    int a[1000] = {0};
    int i = 0;
    int num = 0;
    int count = 0;
    printf("Enter as many as 1000 values: ");
    while (scanf("%d", &num) == 1) {
        count++;
        a[num - 1]++;
    }
    printf("%d values read into array\n", count);
    printf("value    freq\n");
    for (i = 0; i < 1000; i++) {
        if (a[i] != 0) {
            printf("%4d     %4d\n", i + 1, a[i]);
        }
    }
    
    return 0;
}

//input: 1 3 4 6 4 3 6 10 3 5 4 3 1 6 4 3 1
