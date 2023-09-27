#include <iostream>
#include <algorithm>
using namespace std;

int A[100000];

int partition(int A[], int p, int r)
{
    int x = A[r];
    int i = p;
    for(int j=p; j<r; j++) {
        if(A[j]<=x) swap(A[i++], A[j]);
    }
    swap(A[i], A[r]);
    return i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>A[i];
    int q = partition(A, 0, n-1);
    for(int i=0; i<n; i++) {
        if(i) cout<<' ';
        if(i==q) cout<<'['<<A[i]<<']';
        else cout<<A[i];
    }
    cout<<'\n';
    return 0;
    
}