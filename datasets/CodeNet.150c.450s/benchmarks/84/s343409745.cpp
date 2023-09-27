#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int INF = 1001001001;
ll counter = 0;


void mergex(vector<int> &A, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    vector<int> L(n1+1), R(n2+1);
    rep(i, n1){
        L[i] = A[left+i];
    }
    rep(i, n2){
        R[i] = A[mid+i];
    }
    L[n1] = INF;
    R[n2] = INF;

    int i = 0;
    int j = 0;

    for(int k = left; k < right; k++){
        if (L[i] <= R[j]){
            A[k] = L[i];
            i += 1;
        } else {
            A[k] = R[j];
            counter += n1 - i;
            j += 1;
        }
    }
    return;
}

void mergexSort(vector<int> &A, int left, int right){
    if(left+1 < right){
        int mid = (left + right) / 2;
        mergexSort(A, left, mid);
        mergexSort(A, mid, right);
        mergex(A, left, mid, right);
    }
    return;
}

int main() {
    int n; cin >> n;
    vector<int> A(n);
    rep(i, n){
        cin >> A[i];
    }

    mergexSort(A, 0, n);

    cout << counter << endl;
}
