#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>
#include<numeric>
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define rep(i,s,n) for(int i=(s); i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x)

using namespace std;

typedef unsigned int uint;
typedef long long ll;

const int _dx[] = {0,1,0,-1};
const int _dy[] = {-1,0,1,0};

int getInt(){
  int ret = 0,c;
  bool m = false;
  c = getchar();
  while(!isdigit(c)){
    if(c == '-') m = true;
    c = getchar();
  }
  while(isdigit(c)){
    ret *= 10;
    ret += c - '0';
    c = getchar();
  }
  if(m) ret = -ret;
  return ret;
}

int main(){
  int n,k;
  while((n = getInt()) + (k = getInt())){
    vector<int> tmp(k);
    int kk = 0;
    int nn = 0;
    int sum = 0;
    int ans = INT_MIN;
    REP(i,n){
      int tt = getInt();
      //cout << "tt=" << tt << endl;
      if(i >= k){
        sum -= tmp[nn++];
        nn %= k;
      }
      tmp[kk++] = tt;
      kk %= k;
      sum += tt;
      if(i >= k - 1){
        ans = max(ans, sum);
      }
    }
    print(ans);
  }
  return 0;
}