#include <iostream>
using namespace std;

int main() {
	int n, p;
	while(cin >> n >> p, n || p) {
		int pp = p;
		int cnt[60] = {};
		int i = 0;
		while(1) {
			if(pp == 0) {
				pp = cnt[i];
				cnt[i] = 0;
			}
			else {
				pp -= 1;
				cnt[i]++;
				if(cnt[i] == p) {
					cout << i << endl;
					break;
				}
			}
//			cout << "@" << cnt[i] << endl;
			i++;
			i %= n;
		}
	}
}