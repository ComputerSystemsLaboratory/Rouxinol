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

bool simulate(vector<int>& w, int k, int P){
  if(P < w[w.size() - 1]) return false;
  int cnt = 1, sum = 0;
  for(int i = 0; i < w.size(); i++){
    if(sum + w[i] <= P){
      sum += w[i];
    }else{
      sum = w[i];
      cnt++;
    }
  }
  return cnt <= k;
}

int main(){
  int n, k, w_max = -1;
  cin >> n >> k;
  vector<int> w(n);
  for(int i = 0; i < n; i++){
    cin >> w[i];
    w_max = max(w_max, w[i]);
  }
  int l = w_max, r = 1000000005;
  while(r - l > 0){
    int P = (l + r) / 2;
    if(simulate(w, k, P)){
      r = P;
    }else{
      l = P + 1;
    }
  }
  cout << r << endl;
  return 0;
}
