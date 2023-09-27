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

  int n,m;//n=taro,m=hanako
  while(true){
    cin >>n >>m;
    if(n==0) break;
    int hana=0,taro=0;
    std::vector<int> h,t;
    for(int i=0;i<n;i++){
      int s;cin >> s;taro+=s;
      t.push_back(s);
    }
    for(int i=0;i<m;i++){
      int s;cin >> s;hana+=s;
      h.push_back(s);
    }
    sort(h.begin(),h.end());sort(t.begin(),t.end());
    bool flag=false;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(2*(h[j]-t[i])==(hana-taro)){
          cout << t[i] << " " << h[j] << endl;
          flag=true;break;
        }
      }
      if(flag) break;
    }
    if(!flag) cout << -1 << endl;
  }
}