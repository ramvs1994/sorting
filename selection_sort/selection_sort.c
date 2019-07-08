#include <stdio.h>
#include "selection_sort.h"

/* in place sorting alogrithm */

void selection_sort(int *A,int size) {
    int i,j;
    int min;

    /* Outer loop should traverse till last but one element since the inner loop start from next element */
    for (i = 0; i < size-1; i++) {
        min = i;
        for (j = i+1; j < size; j++) {
             if (A[min] > A[j]) {
                 min = j;
             }
        }
	/* swap two elements if min and i are different*/
        if (min ^ i) {
#if DEBUG
        printf("Before swap: A[%d]=%d A[%d]=%d\n", i, A[i], min, A[min]);
#endif
	A[i] ^= A[min];
	A[min] ^= A[i];
	A[i] ^= A[min];
#if DEBUG
        printf("After swap: A[%d]=%d A[%d]=%d\n", i, A[i], min, A[min]);
#endif 
       	}
    }
}
