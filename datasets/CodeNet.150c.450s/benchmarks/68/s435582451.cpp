#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cassert>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <numeric>
using namespace std;

#define repl(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define rep(i,n) repl(i,0,n)
#define mp(a,b) make_pair((a),(b))
#define pb(a) push_back((a))
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<((x))<<endl
#define fi first
#define se second

#define INF 2147483600
#define long long long

int main(){
  int n;
  while(cin>>n , n){
    vector<int> vec(n);
    rep(i,n) cin>>vec[i];
    sort(all(vec));
    int res=INF;
    rep(i,n-1) res = min(res, vec[i+1]-vec[i]);
    cout << res<<endl;
  }
  return 0;
}