#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;

const int My_Inf=2147483647;
const long long int My_LInf=9223372036854775807;


int main() {
	while (1) {
		int N; cin >> N;
		if (!N)break;
		int ans = 0;
		bool lu = false;
		bool ru = false;
		bool down = true;
		for (int i = 0; i < N; ++i) {
			string st; cin >> st;
			if (st == "lu") {
				lu = true;
				if (down&&lu&&ru) {
					ans++;
					down = !down;
				}
			}
			else if (st == "ru") {
				ru = true;
				if (down&&lu&&ru) {
					ans++;
					down = !down;
				}
			}
			else if (st == "ld") {
				lu = false;
				if (!down&&!lu&&!ru) {
					ans++;
					down = !down;
				}
			}
			else {
				ru = false;
				if (!down&&!lu&&!ru) {
					ans++;
					down = !down;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}