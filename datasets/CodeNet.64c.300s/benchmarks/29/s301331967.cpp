#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,n) for(int i = 0;i < (n);i++)
#define rep(i,m,n) for(int i = (m);i < (n);i++)
#define P pair<int,int>
#define pb push_back
#define mk make_pair
using namespace std;
#define Vec(a) vector <int> a
const int INF = 1 << 20;
const int MOD = 1e9+7;





int main(){
  ll n;
 
  while(cin >> n,n){
    ll sum = 1000000;
    REP(i,1001){
      REP(j,101){
	if(n-i*i-j*j*j >= 0){
	  sum = min(sum,(n-i*i-j*j*j)+i+j);
	}
      }
    }
    cout << sum << endl;
  }
  return 0;
}

