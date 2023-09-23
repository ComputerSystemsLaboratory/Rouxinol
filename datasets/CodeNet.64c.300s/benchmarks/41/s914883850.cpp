#include<iostream>
using namespace std;
#define MAX 500000
int H,largest;
int right(int i)
{
    return 2*i+1;
}
int left(int i)
{
    return 2*i;
}
int parent(int i)
{
    return i/2;
}

void maxHeapify(int A[],int i)
{
    int l = left(i);
    int r = right(i);
    //从左节点、自身、右节点中选出值最大的节点
    if( l <= H && A[l] > A[i] )
    {
        largest = l;
    }else{
        largest = i;
    }
    if( r <= H && A[r] > A[largest])
    {
        largest = r;
    }
    if(largest != i)
    {
        int temp = A[i] ;
        A[i] = A[largest];
        A[largest] = temp;
        maxHeapify(A,largest);
    }
}

void buildMaxHeap(int A[])
{
    for(int i=H/2;i>0;i--)
    {
        maxHeapify(A,i);
    }
}

int main()
{
    int A[MAX+1];
    cin>>H;
    for(int i=1;i<=H;i++)
    {
        cin>>A[i];
    }
    buildMaxHeap(A);
    for(int i=1;i<=H;i++)
    {
        cout<<" "<<A[i];
    }
    cout<<endl;
    return 0;
}



