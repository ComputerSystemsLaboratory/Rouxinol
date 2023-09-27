#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	vector<int> ansvec;
	for (;;){
		int n;
		cin >> n;
		if (n == 0) break;

		int tmpmin = 1001;
		int tmpmax = -1;
		int tmpans = 0;
		for (int i = 0; i < n; i++){
			int s;
			cin >> s;
			tmpmin = min(s, tmpmin);
			tmpmax = max(s, tmpmax);
			tmpans += s;
		}
		tmpans -= (tmpmin + tmpmax);
		tmpans /= (n - 2);
		ansvec.push_back(tmpans);
	}

	for (int ans : ansvec){
		cout << ans << endl;
	}

	return 0;
}