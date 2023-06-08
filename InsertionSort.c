#include <stdio.h>
void insertionsort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
    int n,i,j,a[100];
    printf("Number of elements:- ");
    scanf("%d",&n);
    printf("Enter the elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("Elements after Sorting:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
