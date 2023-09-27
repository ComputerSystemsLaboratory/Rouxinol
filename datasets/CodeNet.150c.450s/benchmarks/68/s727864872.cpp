#include <iostream> 
#include<vector>
#include<algorithm>
using namespace std; 
int main() {
	int n;
	int cnt = 10000000;
	while (cin >> n, n != 0) {
		vector <int> vec(n);
		for (int i = 0; i < n; i++) {
			cin >> vec.at(i);
		}
		sort(vec.begin(), vec.end());
		for (int j = 0; j < n-1; j++) {
			cnt = min(cnt, vec.at(j + 1) - vec.at(j));
		}
		cout << cnt << endl;
		cnt = 10000000;
	}
}

