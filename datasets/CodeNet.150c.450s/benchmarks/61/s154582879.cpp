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

  while(true){
    int n,a,b,c,x;
    cin >> n >> a >> b >> c >> x;
    if(n==0) break;
    int y[n+1];
    for(int i=1;i<=n;i++){
    cin >> y[i];
    }
    int pos=1,flame=0;
    if( x==y[1]){
      pos++;
    }
    while(pos<n+1){
      flame++;
      x = (a*x+b)%c;
      if(x==y[pos]) pos++;
      if(flame>10000){
        cout << -1 << endl;
        break;
      }
    }
    if(flame!=10001) cout << flame << endl;
  }
}