#include <bits/stdc++.h>
using namespace std;
// #define int long long
typedef long long ll;
typedef pair<int,int> pii;
#define ITR(v,c) for(auto v=begin(c);v!=end(c);v++)
#define FOR(v,a,n) for(int v=a;v<(int)(n);v++)
#define FORE(x,arr) for(auto &x:arr)
#define REP(v,n) FOR(v,0,n)
#define RREP(v,n) for(int v=(int)(n);v>=0;v--)
#define ALL(c) begin(c),end(c)
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
const int INF = 1e9;
const ll INFLL = 1e18;
template<class T,class U>ostream&operator<<(ostream &os,const pair<T,U> &p){
    os<<"("<<p.first<<","<<p.second<<")";return os;}
template<class T>ostream&operator<<(ostream &os,const vector<T> &v){
    ITR(i,v)os<<*i<<(i==end(v)-1?"":" ");return os;}
//------------------------------------------------------------------------------

signed main() {
    vector<bool> a(30,false);
    REP(i,30) {
        int x;
        cin>>x;
        a[x-1]=true;
    }
    REP(i,30) {
        if(!a[i]) cout<<i+1<<endl;
    }
    return 0;
}