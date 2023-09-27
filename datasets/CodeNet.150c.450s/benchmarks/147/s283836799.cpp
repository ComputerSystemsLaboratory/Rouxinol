#include<bits/stdc++.h>
#define rep(i,n) for(int i = 1;i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main(){
    int N;
    cin >> N;
    vector<int> ans(10050);
    for(int i=0;i<N;i++) ans[i] = 0;
    int tmp;

    rep(x, 105)rep(y, 105)rep(z, 105){
        tmp = x*x + y*y + z*z + x*y + y*z + z*x;
        if(tmp < 10050) ans[tmp]++;
    }

    rep(i,N+1) cout << ans[i] << endl;
    return 0;
}