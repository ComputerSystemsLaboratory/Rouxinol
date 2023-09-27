#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cstring>
#include<math.h>
#include<bitset>
#include<queue>
#include<set>
#include<iomanip>
#include<math.h>
#include<assert.h>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr long long INF = 1LL << 40;
const double INFD = 1e100;
const ll mod = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}
// ----------------------------------------------------------------------------

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a < b && b < c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}

