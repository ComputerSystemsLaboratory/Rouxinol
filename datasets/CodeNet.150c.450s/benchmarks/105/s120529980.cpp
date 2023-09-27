#include <bits/stdc++.h>

using namespace std;

typedef double D;
typedef long long int LL;

#define st first
#define nd second
#define PLL pair <LL, LL>
#define PII pair <int, int>

const int N = 1e6 + 7;
const int MX = 1e9 + 7;
const LL INF = 1LL * MX * MX;

int n;
string s;
LL val[N];

void solve(){
	cin >> n;
	for(int i = 0; i < n; ++i)
		cin >> val[i];
	cin >> s;
	
	vector <LL> vals;
	for(int i = n - 1; i >= 0; --i){
		LL cur = val[i];
		for(auto v: vals)
			if((cur ^ v) < cur)
				cur ^= v;
		
		if(s[i] == '1'){
			if(cur){
				cout << "1\n";
				return;
			}
		}
		else if(cur){
			vals.push_back(cur);
			sort(vals.begin(), vals.end());
			reverse(vals.begin(), vals.end());
		}
	}
	
	cout << "0\n";
}

int main(){
	int cases;
	cin >> cases;
	
	while(cases--)
		solve();
	return 0;
}