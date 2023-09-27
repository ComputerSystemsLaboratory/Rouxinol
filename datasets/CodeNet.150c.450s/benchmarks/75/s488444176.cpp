#include <iostream>
#include <stdio.h>
#include <malloc.h>
using namespace std;
int parent(int i){return i/2;}
int lefts(int i){return 2*i;}
int rights(int i){return 2*i+1;}
void maxHeapify(int A[],int i,int H)
{
    int l = lefts(i);
    int r = rights(i);
    int largest;
    if(l<=H&&A[l]>A[i]){
        largest = l;
    }
    else largest = i;
    if(r<=H&&A[r] > A[largest])
        largest = r;
    if(largest != i)
    {
        swap(A[i],A[largest]);
        maxHeapify(A,largest,H);
    }

}
void buildMaxHeap(int A[],int H)
{
    for(int i = H/2;i > 0;i--)
    {
        maxHeapify(A,i,H);
    }
}
int main()
{
    int *a,n,i;
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*(n+1));
    for(i = 1;i <= n;i++)
    {
        scanf("%d",&a[i]);
    }
    buildMaxHeap(a,n);
    for(i = 1;i <= n;i++)
    {
        printf(" %d",a[i]);
    }
    putchar('\n');
}

