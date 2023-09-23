#include <iostream>
#include <algorithm>
using namespace std;

void maxHeapify(int A[], int n, int i)
{
    int l=2*i, r=2*i+1;
    int largest=i;
    if(l<=n&&A[largest]<A[l]) largest=l;
    if(r<=n&&A[largest]<A[r]) largest=r;
    if(i!=largest) {
        swap(A[i], A[largest]);
        maxHeapify(A, n, largest);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int h[500001];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cin>>h[i];
    for(int i=n/2; i>=1; i--) maxHeapify(h, n, i);
    for(int i=1; i<=n; i++) cout<<' '<<h[i];
    cout<<'\n';
    return 0;
}