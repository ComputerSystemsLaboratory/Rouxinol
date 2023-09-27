//   _/                _/                 _/_/_/   _/
//_/_/_/_/   _/_/   _/_/_/_/   _/_/    _/       _/_/
// _/     _/    _/   _/     _/    _/  _/_/_/     _/
//_/     _/    _/   _/     _/    _/  _/    _/   _/
// _/_/   _/_/       _/_/   _/_/      _/_/     _/
#include<iostream>
#include<algorithm>
#include<cmath>
#include<iomanip>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;
typedef long long ll;
const int MOD=1e9+7;
const double pi=3.14159265358979323846;
const int inf=2e9;
const ll INF=9e18;
typedef pair<int,int> P;
ll power(int a,int b){
	int sum=1;
	for (; b; b>>=1){
		if (b&1)	sum=1ll*sum*a%MOD;
		a=1ll*a*a%MOD;
	}
	return sum;
}
int main() {
  cin.tie(0),cout.tie(0);
  ios::sync_with_stdio(false);
  int m,n;
  cin >> m >> n;
  cout << power(m,n) << endl;
}
