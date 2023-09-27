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

  int n,m;
  cin >> n;
  bool locked=true;
  string u[n],t;
  for(int i=0;i<n;i++) cin >> u[i];
  cin >> m;
  for(int i=0;i<m;i++){
    cin >> t;
    bool touroku=false;
    for(int j=0;j<n;j++){
      if(t==u[j]) touroku=true;
    }
    if(touroku){
      if(locked) cout << "Opened by " << t << endl;
      else cout << "Closed by " << t << endl;
      locked = !locked;
    }
    else cout << "Unknown " << t << endl;
  }
}