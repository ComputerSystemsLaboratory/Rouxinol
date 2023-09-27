#include <iostream>
#include <vector>
using namespace std;

#define INF 1.0e9

long long cnt = 0;

void merge(vector<int> &A, int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right - mid;
    vector<int> L(n1+1,0);
    for(int i=0; i<n1; ++i){
        L[i] = A[left+i];
    }
    vector<int> R(n2+1,0);
    for(int i=0; i<n2; ++i){
        R[i] = A[mid+i];
    }
    L[n1] = INF;
    R[n2] = INF;
    int i=0;
    int j=0;
    for(int k=left; k<right; ++k){
        if( L[i] < R[j] ){
            A[k] = L[i];
            ++i;

        }else{
            A[k] = R[j];
            ++j;
            cnt+=n1-i;
        }
    }
    return;
}

void mergesort(vector<int> &A, int left, int right){
    if( left+1 < right ){
        int mid = (left+right)/2;
        mergesort(A, left, mid);
        mergesort(A,mid,right);
        merge(A, left, mid, right);
    }

    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n,0);
    for(auto&& x : A){
        cin >> x;
    }

    mergesort(A,0,n);

    cout << cnt << endl;

}
