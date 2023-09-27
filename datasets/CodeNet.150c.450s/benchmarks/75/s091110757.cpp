#include <iostream>
#include<cstdio>
using namespace std;
#define MAX 2000000
int H,A[MAX];
void maxHeapify(int i)
{
    int l,r,largest;
    l=i*2;
    r=i*2+1;
    if(l<=H&&A[i]<A[l])largest=l;
    else largest=i;
    if(r<=H&&A[largest]<A[r])largest=r;
    if(largest!=i){
        swap(A[largest],A[i]);
        maxHeapify(largest);
    }
}
void buildMaxHeap()
{
    for(int i=H/2;i>=1;i--){
        maxHeapify(i);
    }
}
int main()
{
    scanf("%d",&H);
    for(int i=1;i<=H;i++)
    {
        scanf("%d",&A[i]);
    }
    buildMaxHeap();
    for(int i=1;i<=H;i++)
    {
        printf(" %d",A[i]);
    }
    printf("\n");
    return 0;
}