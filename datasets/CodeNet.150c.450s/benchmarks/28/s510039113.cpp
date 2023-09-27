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
int n, k;
vector<int> w;
bool f(int p){
  int l = 0, r = n - 1;
  int wei = 0;
  int cnt = 0;
  FOR(i,0,n){
    if(w[i] > p) return false;
    if(wei + w[i] <= p){
      wei += w[i];
    } else {
      cnt++;
      wei = w[i];
    }
  }
  if(wei) cnt++;
  return cnt <= k;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>n>>k;
  w.resize(n);
  FOR(i,0,n) cin>>w[i];
  // 二分探索
  int l = 0, r = 2e9;
  while(r - l > 1){
    int m = (r + l) / 2;
    if(f(m)) r = m;
    else l = m;
  }
  cout << r << endl;
  return 0;
}
