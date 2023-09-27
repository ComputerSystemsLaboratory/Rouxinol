#include <iostream>
#include <limits>
using namespace std;

int S[500000];
int L[250001];
int R[250001];
int c=0;

void merge(int A[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;
    int i, j, k;
    for(i=0; i<n1; i++) L[i] = A[left + i];
    for(i=0; i<n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = numeric_limits<int>::max();
    i=j=0;
    for(k=left; k<right; k++) {
        c++;
        if(L[i]<=R[j]) A[k] = L[i++];
        else A[k] = R[j++];
    }
}

void mergeSort(int A[], int left, int right)
{
    if(left+1<right) {
        int mid = (left+right)/2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) cin>>S[i];
    mergeSort(S, 0, n);
    cout<<S[0];
    for(int i=1; i<n; i++) cout<<' '<<S[i];
    cout<<'\n'<<c<<'\n';
    return 0;
}