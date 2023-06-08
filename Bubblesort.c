#include <stdio.h>
void bubblesort(int a[], int l)
{
    int i,j,temp;
    for(i = 0; i < l - 1; i++){       

        for(j = 0; j < l - i - 1; j++){          

            if(a[j] > a[j + 1]){               

                temp = a[j];

                a[j] = a[j + 1];

                a[j + 1] = temp;

            }

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
    bubblesort(a,n);
    printf("Elements after Sorting:- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
