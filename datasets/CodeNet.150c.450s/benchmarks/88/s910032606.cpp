#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
using namespace std;

int main() {
	const long long int mod = 1000000007;
	map<long long int, long long int>mp;
	//cout << fixed << setprecision(10);
	long long int  n, m, a[20000], b, c, d, k,sa, h, w, left = 1, right = 0;
	long long int sc, sr, num2, no[1005][1005] = {}, res = 999999999, count = 0, now = 0, mi = 9999999999;

	string str, t;

	cin >> h>>w;
	while (1) {
		res = 0;
		sa = 999999999999;
		now = 0;
		if (h == 0&&w==0) { return 0; }
		now = h * h + w * w;
		for (int i = 1; i <= 150; i++) {
			for (int j = i + 1; j <= 150; j++) {
				if (sa > i * i + j * j - now && i * i + j * j > now) { sa = i * i + j * j-now; left = i; right = j; }
				else if (i * i + j * j == now && h < i) { cout << i << " "<< j << endl; goto nex; }
			}
		}
		cout <<left << " " << right << endl;
		nex:
		cin >> h >> w;
	}
	
}

