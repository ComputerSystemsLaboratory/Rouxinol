#include <iostream>
using namespace std;
int H;
void maxHeapify(int A[],int i)
{
    int l=2*i,r=2*i+1,largest=i;
    if(l<=H && A[i]<A[l])
        largest=l;
    if(r<=H && A[largest]<A[r])
        largest=r;
    int temp=A[i];
    A[i]=A[largest];
    A[largest]=temp;
    if(largest!=i)
        maxHeapify(A,largest);
}
int main()
{
    int heap[500001];
    cin>>H;
    for(int i=1;i<=H;i++)
        cin>>heap[i];
    for(int i=H/2;i>0;i--)
        maxHeapify(heap,i);
    int isn=0;
    for(int i=1;i<=H;i++)
    {
        cout<<' ';
        cout<<heap[i];
    }
    cout<<endl;
    return 0;
}
