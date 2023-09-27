#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

struct BIT{
  int n;
  vector<ll> data;
  BIT(int n) : data(n + 1, 0), n(n){}
  ll sum(int i){
    ll s = 0;
    while(i > 0){
      s += data[i];
      i -= i & -i;
    }
    return s;
  }
  void add(int i, ll x){
    while(i <= n){
      data[i] += x;
      i += i & -i;
    }
  }
};

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin>>n;
  int A[n];
  FOR(i,0,n) cin>>A[i];
  int B[n];
  FOR(i,0,n) B[i]=A[i];
  sort(B, B + n);
  map<ll, int> M;
  FOR(i,0,n){
    M[B[i]] = i + 1;
  }
  ll ans = 0;
  BIT bit(202020);
  FOR(i,0,n){
    ans += bit.sum(200020) - bit.sum(M[A[i]]);
    bit.add(M[A[i]], 1);
  }
  cout<<ans<<endl;
  return 0;
}
