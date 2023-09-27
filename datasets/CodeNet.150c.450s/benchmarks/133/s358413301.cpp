#include <bits/stdc++.h>
#define endl '\n'
#define pi 3.1415926535897932384626433832
#define ll long long
using namespace std;
ll lcm(ll a, ll b){ if(!a || !b) return 0; return a * b / __gcd(a, b); }
bool isPrime(int n) {if (n <= 1) return false;
if (n <= 3) return true;
if (n % 2 == 0 || n % 3 == 0) return false;
for (int i = 5; i * i <= n; i = i + 6) if (n % i == 0 || n % (i + 2) == 0) return false;
return true;}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	vector<ll> pip(26);
	for(auto &i:pip){
		cin>>i;
	}
	vector<vector<ll>> daw(t,vector<ll>(26));
	for(int i=0;i<t;i++){
		for(int j=0;j<26;j++){
			cin>>daw[i][j];
		}
	}
	vector<int> sou(t);
	for(auto &i:sou){
		cin>>i;
	}
	vector<int> last(26,0);
	ll sat=0;
	for(int i=0;i<t;i++){
		sat+=daw[i][sou[i]-1];
		last[sou[i]-1]=i+1;
		for(int j=0;j<26;j++){
			sat-=pip[j]*(i+1-last[j]);
		}
		cout<<sat<<endl;
	}
	return 0;
}
