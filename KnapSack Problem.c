#include <stdio.h>
int max(int a, int b) { 
    if(a>b) 
    {
        return a;
    }
    else{
        return b;
    }
}

// Returns the maximum value that can be
// put in a knapsack of capacity W
int knapSack(int W, int wt[], int val[], int n)
{
	// Base Case
	if (n == 0 || W == 0)
		return 0;

	// If weight of the nth item is more than
	// Knapsack capacity W, then this item cannot
	// be included in the optimal solution
	if (wt[n - 1] > W)
		return knapSack(W, wt, val, n - 1);

	// Return the maximum of two cases:
	// (1) nth item included
	// (2) not included
	else
		return max(
			val[n - 1]
				+ knapSack(W - wt[n - 1], wt, val, n - 1),
			knapSack(W, wt, val, n - 1));
}

// Driver code
int main()
{
    int i,j,n,p[10],w[10],W;
    printf("Enter the number of items:- ");
    scanf("%d",&n);
    printf("Enter the profit of items:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("Enter the weight of items:- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    printf("Enter the maximum weight of kanpsack:- ");
    scanf("%d",&W);
	printf("Maximum profit to be acquired:- %d", knapSack(W, w, p, n));
	return 0;
}
