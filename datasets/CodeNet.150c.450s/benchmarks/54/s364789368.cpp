#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
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
	string W; cin >> W;
	transform(W.begin(), W.end(), W.begin(), ::tolower);
	int cnt = 0;
	for (string T; cin >> T&&T != "END_OF_TEXT";) {
		transform(T.begin(), T.end(), T.begin(), ::tolower);
		if (T == W)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}