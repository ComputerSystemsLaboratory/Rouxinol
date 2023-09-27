#include <iostream>
#include <vector>

using namespace std;

#define rep(i, n) for(int i=0; i<(n); ++i)
const int MAX = 1500 * 1000;

void countLength(vector<int>& cnt, vector<int>& v){
    cnt.assign(MAX+1, 0);
    rep(i, (int)v.size()){
        int L = 0;
        for(int j=i; j<(int)v.size(); ++j){
            L += v[j];
            cnt[L]++;
        }
    }
}

int solve(vector<int>& h, vector<int>& w){
    vector<int> cntH, cntW;
    countLength(cntH, h); countLength(cntW, w);
    int res = 0;
    rep(i, (int)cntH.size())res += cntH[i] * cntW[i];
    return res;
}

int main(){
    int N, M;
    while(cin >> N >> M, N|M){
        vector<int> h(N), w(M);
        rep(i, N)cin >> h[i];
        rep(i, M)cin >> w[i];
        cout << solve(h, w) << '\n';
    }
    return 0;
}