#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
ll h,w;

int main(int argc, char const *argv[]) {
  vector<vl> x;
  for(ll i = 1;i <= 300;i++){
    for(ll j = i+1;j <= 300;j++){
      x.push_back(vl({i*i+j*j,i,j}));
    }
  }
  sort(x.begin(),x.end());
  while(cin >> h >> w){
    if(h == 0 && w == 0) return 0;
    for(ll i = 0;i < x.size();i++){
      if(x[i][1] == h && x[i][2] == w){
        cout << x[i+1][1] << " " << x[i+1][2] << endl;
      }
    }
  }
  return 0;
}

