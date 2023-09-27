#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i = 0; i < n; i++)
#define ll long long int

int main() {
	int d;
	vector<int> c(26);
	
	cin >> d;
	vector<vector<ll>> s(d,vector<ll>(26));
	vector<ll> sumd(26,0);

	ll sum=0;
	rep(i,26){
		cin >> c[i];
	}
	rep(i,d){
		rep(j,26){
			cin >> s[i][j];
		}
	}
	vector<ll> ans(d);
	ll a,x=0;

	rep(i,d){
		cin >> a;
		x += s[i][a-1];
		rep(j,26){
			if(j == a-1){
				sumd[j] = 0;
			}
			else{
				sumd[j] += c[j];
			}
			sum += sumd[j];
		}
		ans[i] = x - sum;
	}
	
	rep(i,d){
		cout << ans[i] << endl;
	}
	return 0;
}