// C code to implement quicksort

#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int p, int r)
{
	// Choosing the pivot
	int x = arr[r];

	// Index of smaller element and indicates
	// the right position of pivot found so far
	int i = (p - 1);

	for (int j = p; j <= r - 1; j++) {

		// If current element is smaller than the pivot
		if (arr[j] < x) {

			// Increment index of smaller element
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[r]);
	return (i + 1);
}

// The main function that implements QuickSort
// arr[] --> Array to be sorted,
// low --> Starting index,
// high --> Ending index
void quickSort(int arr[], int p, int r)
{
	if (p < r) {

		// pi is partitioning index, arr[p]
		// is now at right place
		int q = partition(arr, p, r);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, p, q - 1);
		quickSort(arr, q + 1, r);
	}
}

// Driver code
int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	quickSort(arr, 0, N - 1);
	printf("Sorted array: \n");
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	return 0;
}
