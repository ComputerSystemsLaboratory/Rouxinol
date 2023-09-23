#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

using namespace std;

int n;
int A[1010];

void insertsort(int n,int *A)
{
    for(int k=0;k<n;k++)
        {
            if(k!=n-1)
            printf("%d ",A[k]);
            else
                printf("%d\n",A[k]);
        }
    for(int i=1;i<n;i++)
    {
        int j=i-1;
        int v=A[i];
        while(j>=0&&A[j]>v)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=v;
        for(int k=0;k<n;k++)
        {
            if(k!=n-1)
            printf("%d ",A[k]);
            else
                printf("%d\n",A[k]);
        }

    }
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&A[i]);
    insertsort(n,A);
    return 0;
}

