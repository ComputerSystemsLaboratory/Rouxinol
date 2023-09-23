#include "bits/stdc++.h"
#define rep(i,n) for(int i = 0;i < n;i++)
#define P(p) cout<<(p)<<endl;
using namespace std;
typedef long long ll;
int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };

unsigned long long sttoi(std::string str) {
	unsigned long long ret;
	std::stringstream ss; ss << str;
	ss >> ret;
	return ret;
}

ll gcd(ll a, ll b){
	if (b > a)swap(a, b); if (b == 0)return a; else{ return gcd(b, a%b); }
}


void solve() {
	while (true){
		int n, s;
		cin >> n >> s;
		int count = 0;
		if (n == 0 && s == 0){
			break;
		}
		for (int i = 0; i <= 1 << 10; i++){
			int bitcnt = 0;
			int sum = 0;
			for (int j = 0; j < 10; j++){
				if (1 << j & i){
					bitcnt++;
					sum += j;
				}
			}
			if (bitcnt == n && sum == s){
				count++;
			}
		}
		P(count);
	}

}

int main() {
	solve();
	return 0;
}