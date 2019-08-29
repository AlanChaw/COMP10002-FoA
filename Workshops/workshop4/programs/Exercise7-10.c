/* Exercise 7.10 in Programming, Problem Solving, and Abstraction
 
 Count inversions in an array.
 
 Alistair Moffat, October 2013.
 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int num_inversions(int[], int);
void print_int_array(int[], int);

/* scaffolding to test the required function
 */
int
main(int argc, char *argv[]) {
    int numbers[MAXVALS], valid, k;
    valid = read_int_array(numbers, MAXVALS);
    printf("Array: ");
    print_int_array(numbers, valid);
    /* test some values */
    k = num_inversions(numbers, valid);
    printf("There are %d inversions\n", k);
    return 0;
}

int
read_int_array(int A[], int maxvals) {
    int n, excess, next;
    printf("Enter as many as %d values, ^D to end\n",
           maxvals);
    n = 0; excess = 0;
    while (scanf("%d", &next)==1) {
        if (n==maxvals) {
            excess = excess+1;
        } else {
            A[n] = next;
            n += 1;
        }
    }
    printf("%d values read into array", n);
    if (excess) {
        printf(", %d excess values discarded", excess);
    }
    printf("\n");
    return n;
}

/* the function actually required -- a quadratic-time scan to count
 the number of pairs of items that are in the wrong order in the
 in the supplied array
 */
int
num_inversions(int A[], int n) {
    int i, j, inv=0;
    /* try elements in pairs */
    for (i=0; i<n-1; i++) {
        for (j=i+1; j<n; j++) {
            inv += (A[i]>A[j]);
        }
    }
    return inv;
}

void
print_int_array(int A[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%3d", A[i]);
    }
    printf("\n");
}
