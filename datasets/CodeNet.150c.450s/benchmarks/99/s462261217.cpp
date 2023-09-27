#include <iostream>

using namespace std;

string ToMCXI(int v) {
	char c[5] = "ixcm";
	int k[4] = {1, 10, 100, 1000};
	string ret = "";
	for (int i = 3; i >= 0; --i) {
		int d = v / k[i] % 10;
		if (d > 1) ret += (char)(d + '0');
		if (d > 0) ret += c[i];
	}
	return ret;
}
int FromMCXI(string mcxi) {
	int ret = 0;
	for (int i = 0; i < mcxi.size(); ++i) {
		if ('0' <= mcxi[i] && mcxi[i] <= '9') {
			if (i == mcxi.size()-1) ret += mcxi[i]-'0';
			else {
				int mul = 1;
				switch (mcxi[i+1]) {
				case 'm': mul = 1000; break;
				case 'c': mul = 100; break;
				case 'x': mul = 10; break;
				case 'i': mul = 1; break;
				}
				ret += mul * (mcxi[i]-'0');
			}
			++i;
		}
		else {
			int mul = 1;
			switch (mcxi[i]) {
			case 'm': mul = 1000; break;
			case 'c': mul = 100; break;
			case 'x': mul = 10; break;
			case 'i': mul = 1; break;
			}
			ret += mul;
		}
	}
	return ret;
}
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; ++i) {
		string s1, s2; cin >> s1 >> s2;
		int v = FromMCXI(s1) + FromMCXI(s2);
		cout << ToMCXI(v) << endl;
	}
}