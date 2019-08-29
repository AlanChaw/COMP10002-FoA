/* Exercise 7.7: Most frequent element in array is identified
 Jianzhong Qi and Alistair Moffat, May 2013
 Based on insertionsort.c from Chapter 7
 */

#include <stdio.h>
#include <stdlib.h>

/* maximum array size allowed */
#define MAXVALS 1000

/* function prototypes */
int read_int_array(int A[], int n);
int most_frequent(int A[], int n);
void print_int_array(int A[], int n);

int
main(int argc, char *argv[]) {
    
    int numbers[MAXVALS], valid;
    
    /* get the input */
    valid = read_int_array(numbers, MAXVALS);
    
    /* call the function of interest */
    printf("The most frequent item is %d\n",
           most_frequent(numbers, valid));
    
    /* done */
    return 0;
}

/* find the most frequent integer in an array */
int
most_frequent(int A[], int n) {
    int i, j;
    int max=0, maxFreq=0, currentFreq;
    
    /* defensive test, can't have most frequent item in empty
     array */
    if (n==0) {
        printf("Error: empty array passed to most_frequent()\n");
        exit(EXIT_FAILURE);
    }
    /* check the frequency of each element.
     Note that in this case, we are sure there is an element of
     freq 1, so it is "safe" to set maxFreq to 0 and not have to
     prime the pump explicitly with the first item
     */
    for (i=0; i<n; i++) {
        currentFreq = 0;
        /* now count freq of A[i] */
        for (j=0; j<n; j++) {
            if (A[j] == A[i]) {
                currentFreq++;
            }
        }
        /* update max, but only if strictly greater */
        if ((currentFreq>maxFreq) ||
            (currentFreq==maxFreq && A[i]<max)) {
            maxFreq = currentFreq;
            max = A[i];
        }
    }
    return max;
}

/* read integers from keyboard and store them in an array. */
int
read_int_array(int A[], int maxvals) {
    int n=0, excess=0, next;
    
    printf("Enter as many as %d values, ^D to end\n", maxvals);
    while (scanf("%d", &next) == 1) {
        if (n == maxvals) {
            excess = excess + 1;
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
