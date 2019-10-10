

#include <stdio.h>

void sort_int_array(int A[], int n);
void int_swap(int *p1, int *p2);

int main(){
    
    int a[1000] = {0};
    int num = 0;
    int count = 0;
    printf("Enter as many as 1000 values: ");
    while (scanf("%d", &num) == 1) {
        a[count] = num;
        count++;
    }
    
    printf("%d values read into array\n", count);
    printf("value    freq\n");
    
    // pre-sort
    sort_int_array(a, count);
    int i;
    for (i = 0; i < count; i++) {
        int times = 0;
        int j = i;
        for (; j < count; j++) {
            if (a[i] == a[j])
                times++;
            else
                break;
        }
        printf("%4d     %4d\n", a[i], times);
        i = j - 1;
    }
    
    return 0;
}

void
sort_int_array(int A[], int n) {
    int i, j;
    /* assume that A[0] to A[n-1] have valid values */
    for (i=1; i<n; i++) {
        /* swap A[i] left into correct position */
        for (j=i-1; j>=0 && A[j+1]<A[j]; j--) {
            /* not there yet */
            int_swap(&A[j], &A[j+1]);
        }
    }
    /* and that's all there is to it! */
}

/* exchange the values of the two variables indicated
 by the arguments */
void
int_swap(int *p1, int *p2) {
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}


/*
input: 1 3 4 6 4 3 6 10 3 5 4 3 1 6 4 3 1
17 values read into array
value    freq
1        3
3        5
4        4
5        1
6        3
10        1
*/
