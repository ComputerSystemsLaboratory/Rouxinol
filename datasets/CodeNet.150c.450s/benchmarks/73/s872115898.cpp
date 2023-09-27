//  Created by Vignesh Manoharan

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <numeric>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;

const int INF = 1000000000;
const ll LINF = 1e17;
const double PI =3.141592653589793238;
const ll lmod = 1000000007l;
const int mod=1000000007;
const double eps = 0.000001;
#pragma unused(INF, LINF, PI, lmod, mod, eps)

#define F(i,a,n) for(int i=(a);i<(n);i++)

template<typename T,typename TT> ostream& operator<<(ostream &s,pair<T,TT> t) {return s<<"("<<t.first<<","<<t.second<<")";}
template<typename T> ostream& operator<<(ostream &s,vector<T> t){
    for(int i=0;i<(t).size();i++)s<<t[i]<<((i<(t).size()-1)?" ":"");return s; }
template<typename T> ostream& operator<<(ostream &s,set<T> t){for(T x:t) s<<x<<" ";return s; }
template<typename T> istream& operator>>(istream &s,vector<T> &t){
    for(int _i=0;_i<t.size();_i++) s>>t[_i];return s; }

#define pb push_back
#define mp make_pair
#define all(v) v.begin(),v.end()

void update(int idx, int value, vi &t){
    // increment t[idx] by value
    while(idx < t.size()){
        t[idx] += value;
        idx |= (idx+1);
    }
}

int query(int idx, vi &t){
    // get sum of t[0]..t[idx]
    int res=0;
    while(idx >= 0){
        res += t[idx];
        idx = (idx & (idx+1))-1;
    }
    return res;
}
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_2_B

int main(int argc, const char * argv[]) {
    #ifdef LOCAL_TEST
    freopen("input", "r", stdin);
    freopen("output", "w", stdout);
    #endif
    int n,q;
    cin>>n>>q;
    vi a(n);
    F(i,0,q){
        int t,x,y;
        cin>>t>>x>>y;
        if(t==0){
            // a[x]+=y;
            x--;
            update(x,y,a);
        } else {
            // print sum(a[x..y]);
            x--;y--;
            int rsum = query(y,a);
            int lsum = (x>0?query(x-1,a):0);
            cout<<rsum-lsum<<"\n";
        }
    }

}