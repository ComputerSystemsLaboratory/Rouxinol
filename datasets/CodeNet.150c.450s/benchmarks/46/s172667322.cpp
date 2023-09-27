#include <iostream>
using namespace std;

int main() {
	int n,x,cnt;

	while(cin >> n >> x && !(n == 0 && x == 0)) {
		cnt = 0;
		for(int i = 1;i <= n;i++) {for(int j = i + 1;j <= n;j++) {for(int k = j + 1;k <= n;k++) {
			cnt += (i + j + k == x);
		}}}
		cout << cnt << endl;
	}
}