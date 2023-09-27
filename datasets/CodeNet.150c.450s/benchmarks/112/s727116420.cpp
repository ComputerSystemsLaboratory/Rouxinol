#include <iostream>
#include <string>
using namespace std;
int main(){
	while (true) {
		int n;
		cin >> n;
		if (n == 0) {
			break;
		}
		string bef;
		string aft;
		for (int i = 0; i < n; i++) {
			char a, b;
			cin >> a >> b;
			bef.push_back(a);
			aft.push_back(b);
		}
		int m;
		cin >> m;
		string s_bef;
		for (int i = 0; i < m; i++) {
			char a;
			cin >> a;
			s_bef.push_back(a);
			for (int j = 0; j < n; ++j) {
				if (s_bef[i] == bef[j]) {
					s_bef[i] = aft[j];
					break;
				}
			}
		}
		cout << s_bef << endl;
	}
	return 0;
}