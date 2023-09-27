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

  int n,m,p;
  int player[101];
  while(true){
    int ans;
    cin >> n >> m >> p;
    if(n==0) break;
    int voter=0;
    for(int i=1;i<=n;i++){
      int x;
      cin >> x;
      player[i] = x;
      voter += x;
    }
    if(player[m]==0) ans=0;
    else ans = voter*(100-p)/player[m];
    cout << ans  << endl;
  }
}