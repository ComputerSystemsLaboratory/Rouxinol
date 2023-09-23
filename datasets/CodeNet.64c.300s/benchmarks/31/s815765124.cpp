#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(false);

	bool f[31] = {false};

	for (int i = 0;i < 28;i++){
		int tmp; cin >> tmp;
		f[tmp] = true;
	}

	for (int i = 1;i < 31;i++){
		if(!f[i]) cout << i << endl;
	}

	return 0;

}

