#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int n; cin >> n;
	int S[10001];
	for (int i = 0; i < n; i++)cin >> S[i];
	int q; cin >> q;
	int T[501];
	for (int i = 0; i < q; i++)cin >> T[i];

	int cnt = 0;
	for (int i = 0; i < q; i++) {
		for (int j = 0; j < n; j++) {
			if (T[i] == S[j]) {
				//cout << T[i] << " " << S[j] << endl;
				cnt++;
				break;
			}
		}
	}
	cout << cnt << endl;
	return 0;
}