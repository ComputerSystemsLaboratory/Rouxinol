#include <bits/stdc++.h>
using namespace std;

string str[7] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
};

int day[13] = {
	0,
	31, 29, 31, 30,
	31, 30, 31, 31,
	30, 31, 30, 31
};

int main() {
	ios :: sync_with_stdio(false);
	while(true) {
		int m, d; cin >> m >> d;
		if(!m && !d) break;
		int s = d;
		for(int i = 1; i < m; i ++)
			s += day[i];
		cout << str[(s + 2) % 7] << '\n';
	}
	return 0;
}