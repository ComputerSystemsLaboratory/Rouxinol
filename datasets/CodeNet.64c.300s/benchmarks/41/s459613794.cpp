#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int n;
int A[2000005];

void maxHeapify(int A[],int i)
{
    int l,r,largest;
    l = 2*i;
    r = 2*i+1;
    if(l <= n && A[l] > A[i] )
        largest = l;

    else
        largest = i;
    if(r <= n && A[r] > A[largest])
        largest = r;
    if(largest != i)
    {
        swap(A[i],A[largest]);
        maxHeapify(A,largest);
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&A[i]);
    for(int i=n/2;i>=1;i--)
        maxHeapify(A,i);
    for(int i=1;i<=n;i++)
        printf(" %d",A[i]);
    printf("\n");
    return 0;
}