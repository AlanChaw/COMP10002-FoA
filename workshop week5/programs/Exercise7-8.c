/* Exercise 7.8 in Programming, Problem Solving, and Abstraction
 
 Function that identifies the k'th smallest value in array A
 by repeatedly finding and eliminating from consideration large items.
 
 Alistair Moffat, August 2012
 
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXVALS 1000

/* function prototypes */

int read_int_array(int[], int);
int kth_smallest(int[], int, int);
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
    for (k=0; k<valid; k++) {
        printf("The %d'th smallest is %d\n", k,
               kth_smallest(numbers, valid, k));
    }
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

/* the function actually required -- returns index of k'th smallest
 in the supplied array
 
 note -- this is not an efficient function, running time is O(n^2);
 but hey, at least it works...
 */
int
kth_smallest(int A[], int n, int k) {
    int i, j, smaller, equal;
    /* try elements one by one, until find one that
     has <= k smaller, and > k smaller+equal
     */
    for (i=0; i<n; i++) {
        smaller = equal = 0;
        for (j=0; j<n; j++) {
            smaller += (A[j]<A[i]);
            equal += (A[j]==A[i]);
        }
        if (smaller<=k && k<smaller+equal) {
            return A[i];
        }
    }
    /* if reach this point, something is wrong! */
    printf("No %d'th smallest possible in array of %d items\n",
           k, n);
    exit(EXIT_FAILURE);
}

void
print_int_array(int A[], int n) {
    int i;
    for (i=0; i<n; i++) {
        printf("%3d", A[i]);
    }
    printf("\n");
}
