#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> VI;
typedef vector<VI> VVI;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = numeric_limits<int>::max() / 2;
const int NEG_INF = numeric_limits<int>::min() / 2;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);

  int e;
  while(cin >>e,e){
    int ans=1000000;
    for(int y=0;y*y<=e;y++){
      for(int z=0;z*z*z<=e-y*y;z++){
        int x=e-z*z*z-y*y;
        ans = min(ans,x+y+z);
      }
    }
    cout << ans << endl;
  }
}