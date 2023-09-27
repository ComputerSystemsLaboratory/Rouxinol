#include <bits/stdc++.h>
using namespace std;
#include <math.h>
#include <iomanip>
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
const int INF=1001001001;
const int mod=1e9+7;

int main() {
  int n;
  cin>>n;
  vector<int>ans(100005);
  for(int x=1;x<=100;x++){
    for(int y=1;y<=100;y++){
      for(int z=1;z<=100;z++){
        int s=x*x+y*y+z*z+x*y+y*z+z*x;
        ans[s]++;
      }
    }
  }
  for(int i=1;i<=n;i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}