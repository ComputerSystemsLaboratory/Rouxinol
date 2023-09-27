#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <map>
#include <set>
#include <queue>
#include <list>
using namespace std;
using pii  = pair<int,int>;
using ll=long long;
using ld=long double;
#define pb push_back
#define mp make_pair
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,a,b) for(int i=(a);i<(b);++i)
#define crep(i) for(char i='a';i<='z';++i)
#define psortsecond(A,N) sort(A,A+N,[](const pii &a, const pii &b){return a.second<b.second;});
#define ALL(x) (x).begin(),(x).end()
#define endl '\n'
int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}
long long gcd(long long a, long long b){return (b == 0 ? a : gcd(b, a%b));}
long long lcm(long long a, long long b){return a*b/gcd(a,b);}
constexpr ll MOD=1000000007;
constexpr ld EPS=10e-8;
template<typename T> istream& operator>>(istream& is,vector<T>& v){for(auto&& x:v)is >> x;return is;}
template<typename T,typename U> istream& operator>>(istream& is, pair<T,U>& p){ is >> p.first; is >> p.second; return is;}
template<typename T,typename U> ostream& operator>>(ostream& os, const pair<T,U>& p){ os << p.first << ' ' << p.second; return os;}
template<class T> ostream& operator<<(ostream& os, vector<T>& v){
    for(auto i=begin(v); i != end(v); ++i){
        if(i !=begin(v)) os << ' ';
        os << *i;
    }
    return os;
}

vector<vector<ll>> V(100007);
ll chek[100007];

void dfs(ll num,ll T){
    chek[num]=T;
    rep(i,V[num].size()){
        if(chek[V[num][i]]==0){
            dfs(V[num][i],T);
        }
    }
}

int main(){
    ll N,M;cin >> N >> M;
    ll A,B,T=1;
    rep(i,M){
        cin >> A >> B;
        V[A].pb(B);
        V[B].pb(A);
    }
    rep(i,N){
        if(chek[i]==0){
            dfs(i,T);
            T++;
        }
    }
    ll Q;cin >> Q;
    rep(i,Q){
        cin >> A >> B;
        if(chek[A]==chek[B]){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}
