
#include<bits/stdc++.h>
using namespace std;
#define rep(i, N) for(int i = 0; i< N; i++)


//M-SOLUTIONS プロコンオープン
//C-Marks
int main() {
    int n,k; cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    for(int i = k; i < n; i++) {
        cout << (a[i-k] < a[i]? "Yes" : "No") << endl;
    }
}
