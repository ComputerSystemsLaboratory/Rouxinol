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
  while(true){
    cin >> n >> m;
    if(n==0) break;
    std::vector<pii> v;
    int sum=0;
    //pair::first-p,second-d
    for(int i=0;i<n;i++){
      int d,p;
      cin >> d >> p;
      pii pa=make_pair(p,d);
      v.push_back(pa);
      sum+=d*p;
    }
    sort(v.begin(),v.end(),greater<pii>());
    for(int i=0;i<n;i++){
      if(m>=v[i].second){
        m -= v[i].second;
        sum -= v[i].first*v[i].second;
      }
      else if(m<v[i].second){
        sum -= v[i].first*m;
        m=0;
      }
      if(m<1) break;
    }
    cout << sum << endl;
  }
}