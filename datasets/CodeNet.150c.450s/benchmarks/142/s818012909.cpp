#include<stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n];
    
    for (int i = 0; i < n; i++) // taking all the scores
	{
        scanf("%d", &a[i]);
    }
    
    for (int i = k; i < n; i++) // loop for checking
	{
        if (a[i - k] < a[i])
		{
            puts("Yes");
        }
		else
		{
            puts("No");
        }
    }
    
    return 0;
}