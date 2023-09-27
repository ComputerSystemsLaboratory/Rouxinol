#include <iostream>
#include <cstdio>
using namespace std;

#define MAX 200000
#define SENT 2000000000
typedef long long ll;

int L[MAX / 2 + 2];
int R[MAX / 2 + 2];

ll merge(int A[], int left, int mid, int right){
    
    int i,j,k;
    ll cmp = 0;
    int n1 = mid - left;
    int n2 = right - mid;
    for (i=0; i < n1; i++) L[i] = A[left + i];
    for (i=0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = R[n2] = SENT;
    
    i=j=0;
    for (k = left; k < right; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i++];
        }else{
            A[k] = R[j++];
            cmp += n1 - i; //=mid + j - k - 1
        }
    }
    return cmp;
}

//????´???°N???????????§????????´??????MergeSort(A, 0, N)??¨????????????????????????
ll mergeSort(int A[], int left, int right){
    
    int mid;
    ll cmp = 0;
    
    if( left + 1 < right ) {
        mid = (left + right) / 2;
        cmp += mergeSort(A, left, mid);
        cmp += mergeSort(A, mid, right);
        cmp += merge(A, left, mid, right);
    }
    return cmp;
}

int main(){
    
    int n,i;
    int A[MAX];
    ll ans = 0;
    
    cin >> n;
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    ans = mergeSort(A, 0, n);

    cout << ans << endl;
    
    return 0;
}