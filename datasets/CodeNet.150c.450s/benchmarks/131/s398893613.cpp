#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector<ULL> VULL;

ULL s2ull(string s) {
	int i;
	ULL res = 0;
	for(i = 0; i < (int)s.length(); i++) {
		res *= 10;
		res += s[i]-'0';
	}
	return res;
}

VI ull2v(ULL n, int l) {
	VI res;
	int i;
	for(i = 0; i < l; i++) {
		res.push_back(n%10);
		n /= 10;
	}
	return res;
}

ULL v2ull(VI v) {
	ULL res = 0;
	int i;
	for(i = 0; i < (int)v.size(); i++) {
		res *= 10;
		res += v[i];
	}
	return res;
}

int main(void) {
	VI vmax, vmin;
	VULL vres;
	ULL a, res;
	int n;
	int i;

	while(true) {
		cin >> a >> n;
		if((a == 0 && n == 0) || cin.eof()) { break; }
		res = 0;
		vres.clear();
		while(true) {
			vres.push_back(a);
			res++;
			vmax = ull2v(a, n);
			vmin = vmax;
			sort(vmax.rbegin(), vmax.rend());
			sort(vmin.begin(), vmin.end());
			a = v2ull(vmax) - v2ull(vmin);
			for(i = 0; i < (int)vres.size(); i++) {
				if(vres[i] == a) { break; }
			}
			if(i < (int)vres.size()) { break; }
		}
		cout << i << " " << vres[i] << " " << res - i << endl;
	}

	return 0;
}