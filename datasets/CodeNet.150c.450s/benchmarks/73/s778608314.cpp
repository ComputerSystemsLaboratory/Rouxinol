#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <cmath>
#include <iomanip>
#include <stack>
#include <queue>
#include <numeric>
#include <map>
#include <unordered_map>
#include <set>
#include <fstream>
#include <random>
#include <bitset>
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) ((int)(x).size())
#define pb push_back
using ll = long long;
using namespace std;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll gcd(ll a, ll b) {return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) {return a/gcd(a,b)*b;}

template<typename T>
struct BIT{
  int n;
  vector<T> bit;
  BIT(int n_=0):n(n_),bit(n+1){}
  void add(int i,T x=1){
    for(i++;i<=n;i+=i&-i){
      bit[i]+=x;
    }
  }
  T sum(int i){
    T x=0;
    for(i++;i;i-=i&-i){
      x+=bit[i];
    }
    return x;
  }
  T sum(int l, int r){
    return sum(r-1) - sum(l-1);
  }
};

int main(){
  int N,Q;cin>>N>>Q;
  BIT<int> b(N);
  rep(q,Q){
    int c, x, y; cin >> c >> x >> y;
    if(c==0){
      x--;
      b.add(x,y);
    }
    else{
      x--;
      cout << b.sum(x,y) << '\n';
    }
  }
  return 0;
}

