#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

const string mcxi = "mcxi";
bool isNum(char c){return '0' <= c && c <= '9';}
int c2i(char c){return c - '0';}

void solve() {
	string lhs, rhs;
	cin>>lhs>>rhs;
	int sum[4];
	memset(sum, 0, sizeof sum);

	// lhs
	int bef = 1;
	for (int i = 0; i < lhs.size(); i++) {
		if (isNum(lhs[i])) {
			bef = c2i(lhs[i]);
		} else {
			sum[mcxi.find(lhs[i])] += bef;
			bef = 1;
		}
	}
	bef = 1;
	// rhs
	for (int i = 0; i < rhs.size(); i++) {
		if (isNum(rhs[i])) {
			bef = c2i(rhs[i]);
		} else {
			sum[mcxi.find(rhs[i])] += bef;
			bef = 1;
		}
	}
	// advance
	for (int i = 3; i > 0; i--) {
		if (sum[i] > 9) {
			sum[i-1] += sum[i] / 10;
			sum[i] %= 10;
		}
	}
	// print
	for (int i = 0; i < 4; i++) {
		if (sum[i] == 0) continue;
		if (sum[i] != 1) cout<<sum[i];
		cout<<mcxi[i];
	}
	cout<<endl;
}

int main(int argc, const char *argv[]) {
	int n; cin>>n;
	rep(i,n) solve();
	return 0;
}