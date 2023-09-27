#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    vector<int> ans;
    int m, nmin, nmax, res, temp;
    while(true){
        temp = 0;
        res = 0;
        cin >> m >> nmin >> nmax;
        if(m == 0) break;
        vector<int> A(m);
        rep(i, m) cin >> A[i];
        sort(A.begin(), A.end(), greater<int>());
        for(int i = nmin; i <= nmax; i++){
            if(temp <= A[i-1] - A[i]){
                temp = A[i-1] - A[i];
                res = i;
            }
        }
        ans.push_back(res);
    }
    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
