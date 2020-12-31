#include <stdio.h>
#include <stdlib.h>
#define n 8000

void quicksort(int a[], int low, int high);
int main(void) {
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	quicksort(a, 0, n-1);
	for (int i = 0; i < n; i++)
    	printf("%d ", a[i]);
	return 0;
}

int sort(int a[], int low, int high){
	int x = a[low];
	for(;;){
		while ( x<a[high] && low<high )
			high--;
		if (low>=high) break;
		a[low++]=a[high];

		while ( a[low]<x && low<high )
			low++;
		if (low>=high) break;
		a[high--]=a[low];
	}
	a[high]=x;
	return high;
}

void quicksort(int a[], int low, int high){
	int pivot;
	if (low>=high)
		return;
	pivot=sort(a, low, high);
	quicksort(a, low, pivot-1);
	quicksort(a, pivot+1, high);
}


