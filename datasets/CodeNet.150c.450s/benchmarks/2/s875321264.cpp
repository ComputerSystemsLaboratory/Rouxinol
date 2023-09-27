#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int ix;
vector<int> A(1000000);

void partitionx(int p, int r){
    int x = A[r];
    ix = p-1;
    for (int j = p; j < r; j++){
        if(A[j] <= x){
            ix++;
            swap(A[ix], A[j]);
        }
    }
    swap(A[ix+1], A[r]);
    return;
}

int main() {
    int n; cin >> n;
    rep(i, n){
        cin >> A[i];
    }

    partitionx(0, n-1);
    rep(i, ix+1){
        cout << A[i] << " ";
    }
    cout << "[" << A[ix+1] << "] ";
    for (int i = ix+2; i < n; i++){
        cout << A[i];
        if(i == n-1){
            cout << endl;
        } else {
            cout << " ";
        }
    }
    return 0;
}
