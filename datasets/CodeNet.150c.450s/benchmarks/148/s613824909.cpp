#include "bits/stdc++.h"
using namespace std;

int main() {
	int N;
	cin >> N;
	string s[100010];
	int ac=0;
	int wa=0;
	int tle=0;
	int re=0;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
		if (s[i] == "AC") ac++;
		if (s[i] == "WA") wa++;
		if (s[i] == "TLE") tle++;
		if (s[i] == "RE") re++;
	}
	cout << "AC x " << ac << endl;
	cout << "WA x " << wa << endl;
	cout << "TLE x " << tle << endl;
	cout << "RE x " << re << endl;

	return 0;
}

