#include <iostream>
#define LEN 2000000
using namespace std;

int N, A[LEN+1];

void maxHeapify(int i)
{
    int l, r, larget;
    l=2*i;
    r=2*i+1;
    if( l<=N&&A[l]>A[i]) larget=l;
    else larget=i;
    if( r<=N&&A[r]>A[larget]) larget =r;
    if(larget!=i){
        swap(A[i],A[larget]);
        maxHeapify(larget);
    }
}

int main()
{
    cin>>N;
    for(int i=1;i<=N;i++) cin>>A[i];
    for(int i=N/2;i>=1;i--) maxHeapify(i);
    for(int i=1;i<=N;i++) cout<< " " <<A[i];
    cout<< endl;
    return 0;
}


