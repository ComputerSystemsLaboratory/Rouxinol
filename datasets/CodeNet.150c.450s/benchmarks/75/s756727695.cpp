#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

#define NIL -2000000100

ll A[1000010], h;

inline void maxHeapify(ll id){
    ll left = id * 2, right = id * 2 + 1, largest;
    if(A[left] > A[right] && A[left] > A[id]){
        largest = left;
    }else if(A[right] > A[id]){
        largest = right;
    }else{
        largest = id;
    }
    if(largest != id){
        ll swapTmp;
        swapTmp = A[largest];
        A[largest] = A[id];
        A[id] = swapTmp;
        maxHeapify(largest);
    }
}

signed main(){
    cin >> h;
    REP(i, 1000010) A[i] = NIL;
    REP(i, (int)h) cin >> A[i + 1];
    for(ll ill = (int)h / 2; ill > 0; ill--){
        maxHeapify(ill);
    }
    FOR(i, 1, (int)h + 1){
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}