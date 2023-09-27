#include <bits/stdc++.h>

using namespace std;

inline int ctoi(char c) { if(c < '0' || '9' < c) throw invalid_argument("ctoi error"); return c - '0'; }
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for(int i = (int)(k); i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

template <typename T>
inline T gcd(T x, T y){
	if (x <= 0 || y <= 0) throw invalid_argument("gcd error: x <= 0 or y <= 0");
	
	if(x < y) swap(x, y);
	T r = x % y;

	while(r != 0){
		x = y;
		y = r;
		r = x % y;
	}

	return y;
}
template <typename T>
inline T lcm(T x, T y){
	if (x <= 0 || y <= 0) throw invalid_argument("lcm error: x <= 0 or y <= 0");

	return x * y / gcd(x, y);
}

int main(){
	vector<int> ans;

	while(true){
		int n, k;
		cin >> n >> k;

		if(n == 0 && k == 0) break;

		vector<int> input;
		rep(i, n){
			int a;
			cin >> a;
			input.push_back(a);
		}

		vector<int> cumu;
		cumu.push_back(0);

		rep(i, n){
			cumu.push_back(cumu[i] + input[i]);
		}

		int sumMax = 0;
		rep(i, n){
			if(n < i + k) break;

			if(sumMax < cumu[i + k] - cumu[i]) sumMax = cumu[i + k] - cumu[i];
		}

		ans.push_back(sumMax);
	}

	rep(i, ans.size()){
		cout << ans[i] << endl;
	}

	return 0;
}
