#include<bits/stdc++.h>
#define loop(i, a, b) for(int i = a; i < b; i++) 
#define rep(i, a) loop(i, 0, a)
using namespace std;
const int MOD = 1000000007;
const int inf = 1e8;
using vi = vector <int>;
using vvi = vector <vi>;
using vc = vector <char>;
using vvc = vector <vc>;
using vs = vector <string>;
using vvs = vector <vs>;
//g++ -std==c++14
//setprecision(10)
int w, n;
vector <pair <int, int> > vp;

int main(){
    cin >> w >> n;
    rep(i, n){
        int va, ri;
        scanf("%d, %d", &va, &ri);
        vp.push_back(make_pair(va, ri)); 
    }
    vi ans;
    rep(i, w)ans.push_back(i + 1);
    rep(i, w){
        int out = i + 1;
        rep(j, vp.size()){
            if(out == vp[j].first)out = vp[j].second;
            else if(out == vp[j].second)out = vp[j].first;
        }
        ans[out - 1] = i + 1;
    }
    rep(i, w)cout << ans[i] << endl;
}