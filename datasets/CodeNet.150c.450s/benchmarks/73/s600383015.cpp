#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <tuple>
#include <unordered_set>
#include <unordered_map>
#include <list>
#include <numeric>
#include <utility>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <cassert>
#include <random>
#include <cstring>


#define rep(i,n) for(int i=0;i<int(n);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back

using namespace std;
using ll = long long;

const ll mod = 1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/

int n;
int node[1000000];

void init(int _n){
  n = 1;
  while(n < _n) n *= 2;
  for(int i = 0; i < n * 2 - 1; i++) node[i] = 0;
}

void add(int idx, int x){
  idx += (n - 1);
  node[idx] += x;
  while(idx > 0){
    idx = (idx - 1) / 2;
    node[idx] = node[idx * 2 + 1] + node[idx * 2 + 2];
  }
}

int getSum(int a, int b, int idx = 0, int left = 0, int right = -1){
  if(right < 0) right = n;
  if(right <= a || b <= left) return 0;
  if(a <= left && right <= b) return node[idx];
  
  int vl = getSum(a, b, idx * 2 + 1, left, (left + right) / 2);
  int vr = getSum(a, b, idx * 2 + 2, (left + right) / 2, right);
  //cerr << "cerr: " << vl << " " << vr << endl;
  return vl + vr;
}

signed main(){
  int N, Q, com, x, y;
  cin >> N >> Q;
  init(N);
  for(int i = 0; i < Q; i++){
    cin >> com >> x >> y;
    if(com) cout << getSum(x - 1, y) << endl;
    else add(x - 1, y);
  }
  return 0;
}
