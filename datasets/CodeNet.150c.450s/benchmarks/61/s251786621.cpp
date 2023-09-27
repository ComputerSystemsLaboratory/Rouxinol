#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int calc(int A, int B, int C, int X){
    return (A*X + B) % C;
}

int main(void){
    vector<int> ans;
    while(true){
        int res = 0;
        int N, A, B, C, X; cin >> N >> A >> B >> C >> X;
        if(C == 0) break;
        rep(i, N){
            int temp; cin >> temp;
            while(X != temp && res <= 10000){
                X = calc(A, B, C, X);
                res++;
            }
            if(i < N-1){
                X = calc(A, B, C, X);
                res++;
            }
        }
        if(res <= 10000) ans.push_back(res);
        else ans.push_back(-1);
    }
    rep(i, ans.size()) cout << ans[i] << endl;
    return 0;
}
