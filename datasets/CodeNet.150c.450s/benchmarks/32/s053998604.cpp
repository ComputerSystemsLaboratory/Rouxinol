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

  int m,mi,ma;
  while(true){
    cin >> m >> mi >> ma;
    if(m==0) break;
    std::vector<int> v;
    for(int i=0;i<m;i++){
      int p;cin >> p;
      v.push_back(p);
    }
    sort(v.begin(),v.end(),greater<int>());
    int gap=-1,n=mi;
    for(int i=mi-1;i<ma;i++){
      int temp=v[i]-v[i+1];
      if(temp>=gap){
        gap=temp;
        n=i+1;
      }
    }
    cout << n << endl;
  }
}