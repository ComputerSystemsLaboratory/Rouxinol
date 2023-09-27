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

  int n,r;
  while(true){
    cin >> n >> r;
    if(n==0) break;
    int p,c;
    int now[n+1],pre[n+1];
    for(int i=1;i<=n;i++) pre[i]=n-i+1;
    for(int i=0;i<r;i++){
      cin >> p >> c;
      for(int j=1;j<=c;j++) now[j]=pre[j+p-1];
      for(int j=c+1;j<=p+c-1;j++) now[j]=pre[j-c];
      for(int j=p+c;j<=n;j++) now[j]=pre[j];
      for(int j=1;j<=n;j++) pre[j]=now[j];
    }
    cout << now[1] << endl;
  }
}