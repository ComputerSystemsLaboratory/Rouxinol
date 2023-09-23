#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int c=0;
void bubbleSort(int A[], int n);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, A[100];
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>A[i];
    }
    bubbleSort(A, n);
    for(int i=0; i<n-1; i++) {
        cout<<A[i]<<' ';
    }
    cout<<A[n-1]<<'\n'<<c<<'\n';
    return 0;
}

void bubbleSort(int A[], int n)
{
    bool flag=true;
    while(flag) {
        flag=false;
        for(int i=n-1; i>0; --i) {
            if(A[i]<A[i-1]) {
                swap(A[i], A[i-1]);
                ++c;
                flag=true;
            }
        }
    }
}