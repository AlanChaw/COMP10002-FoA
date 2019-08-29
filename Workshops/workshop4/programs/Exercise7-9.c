/* Exercise 7.9 in Programming, Problem Solving, and Abstraction
 
 Determine the number of ascending runs in an array.
 
 Alistair Moffat, October 2013.
 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int num_asc_runs(int[], int);
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
    k = num_asc_runs(numbers, valid);
    printf("There are %d runs\n", k);
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

/* the function actually required -- a simple linear scan to count
 the number of adjacent pairs where there is a decrease in value
 in the supplied array
 */
int
num_asc_runs(int A[], int n) {
    int i, runs=1;
    if (n==0) {
        return 0;
    }
    /* try elements in pairs */
    for (i=0; i<n-1; i++) {
        runs += (A[i]>A[i+1]);
    }
    return runs;
}

void
print_int_array(int A[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%3d", A[i]);
    }
    printf("\n");
}
