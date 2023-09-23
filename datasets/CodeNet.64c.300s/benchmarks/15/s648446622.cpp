#include <iostream>
#include <algorithm>
using namespace std;

int c=0;
void selectionSort(int A[], int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, A[100];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }
    selectionSort(A, n);
    for(int i=0; i<n-1; i++) {
        cout<<A[i]<<' ';
    }
    cout<<A[n-1]<<'\n'<<c<<'\n';
    return 0;
}

void selectionSort(int A[], int n)
{
    for(int i=0; i<n-1; i++) {
        int mini=i;
        for(int j=i+1; j<n; j++) {
            if(A[j]<A[mini]) mini=j;
        }
        if(i!=mini) {
            swap(A[i], A[mini]);
            c++;
        }
    }
}