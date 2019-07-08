
#include "selection_sort.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	int *arr =NULL;
	int i;
 
	if (argc == 1) {
		printf("Please pass the array elements to be sorted as arguments\n");
		exit(0);
	}
        arr = (int *)malloc((argc-1)*sizeof(int));
	for (i = 0; i < argc-1; i++) {
		arr[i] = atoi(argv[i+1]);
	}
	selection_sort(arr,argc-1);
	printf("Unsorted Array\n");
	for(i = 1; i < argc; i++) {
		printf("%6s",argv[i]);
	}
	printf("\nSorted Array\n");
	for(i =0; i < argc-1; i++) {
		printf("%6d",arr[i]);
	}
	printf("\n");
	return 0;
}
