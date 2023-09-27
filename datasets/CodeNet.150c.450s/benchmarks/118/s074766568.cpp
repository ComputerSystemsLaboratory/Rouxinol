#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int My_Inf=2147483647;
const long long int My_LInf=9223372036854775807;



const int yy = 20 * 20 + 19 * 10;
int main() {
	int n; cin >> n;
	int ms[30];
	int now = 0;
	for (int i = 0; i < 30; ++i) {
		ms[i] = now;
		if ((i % 2)&&i<20)now += 19;
		else now += 20;	
	}
	while (n--) {
		int y, m, d; cin >> y >> m >> d;
		y--; m--; d--;
		m = y * 10 + m;
		int ans = (m / 30)*yy + ms[m % 30] + d;
		cout << 196470 - ans << endl;

	}
	return 0;
}