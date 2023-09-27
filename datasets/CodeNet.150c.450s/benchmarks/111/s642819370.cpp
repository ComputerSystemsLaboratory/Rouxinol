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
#define long unsigned long long

int main(){
  int n;
  cin>>n;
  vector<int> vec(n);
  rep(i,n) scanf("%d", &vec[i]);

  vector<long> prev(21, 0), nxt(21);
  prev[vec[0]]=1;
  repl(i,1,n-1){
    fill(all(nxt), 0);
    rep(j,21) if(prev[j]>0){
      if(j+vec[i] >= 0 && j+vec[i]<=20) nxt[j+vec[i]] += prev[j];
      if(j-vec[i] >= 0 && j-vec[i]<=20) nxt[j-vec[i]] += prev[j];
    }
    swap(nxt, prev);
  }

  cout << prev[vec[n-1]] << endl;

  return 0;
}