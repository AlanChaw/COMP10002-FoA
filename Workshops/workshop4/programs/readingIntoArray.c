#include  <stdio.h>


int
main(int argc, char *argv[]) {
    printf("Input some numbers: ");
    int N = 10, i, num;
    int A[N];
    for (i = 0; i < N; i++){  // initialize array
        A[i] = 0;
    }
    i = 0;
    while (scanf("%d", &num) == 1) {
        A[i] = num;
        i++;
    }
    for (i = 0; i < N; i++){  // initialize array
        printf("%d ", A[i]);
    }
    
    return 0;
}
