#include<bits/stdc++.h>

using namespace std;

#define INF 1000000007
#define LINF (1LL << 61)
#define PI 3.14159265358979

typedef long long i64;
typedef pair<i64,i64> P;

inline i64 mod(i64 a, i64 m) { return (a % m + m) % m; }

template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }



int d, c[30], s[400][30], t[400];
int score(int a[400], int l, int r){
	int cnt = 0;
	int last[26] = {};
	fill(last,last+26,l-1);
	
	for(int i = l; i < r; i++){
		cnt += s[i][a[i]];
		last[a[i]] = i;
		for(int j = 0; j < 26; j++){
			cnt -= c[j]*(i-last[j]);
		}
	}
	return cnt;
}
void solve(){
	cin >> d;
	for(int i = 0; i < 26; i++) cin >> c[i];
	for(int i = 0; i < d; i++){
		for(int j = 0; j < 26; j++) cin >> s[i][j];
	}
	for(int i = 0; i < d; i++){
		cin >> t[i];
		t[i]--;
	}
	
	for(int i = 0; i < d; i++){
		cout << score(t, 0,i+1) << endl;
	}
}

int main(){
	std::cin.tie(0);
	std::ios::sync_with_stdio(false);
	int t = 1;
	//cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}