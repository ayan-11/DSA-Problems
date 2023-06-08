#include <stdio.h>
void selectionsort(int a[], int l)
{
   int i, j, position, swap;
   for (i = 0; i < (l - 1); i++) {
      position = i;
      for (j = i + 1; j < l; j++) {
         if (a[position] > a[j])
            position = j;
      }
      if (position != i) {
         swap = a[i];
         a[i] = a[position];
         a[position] = swap;
      }
   }
}
int main() {
    int n,i,j,a[100];
    printf("Number of elements:- ");
    scanf("%d",&n);
    printf("Enter the elements:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    selectionsort(a,n);
    printf("Elements after Sorting:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
