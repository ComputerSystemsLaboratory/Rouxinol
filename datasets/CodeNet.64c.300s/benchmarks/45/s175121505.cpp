#include <iostream>

using namespace std;

int main(void){
	while(1){
		int n, m, p; cin >> n >> m >>p;
		if(!n && !m && !p) break;
		m--;
		int sum = 0;
		int win = 0;
		for(int i=0; i<n; i++){
			int x; cin >> x;
			sum += x;
			if(i == m) win = x;
		}
		if(win == 0){
			cout << 0 << endl;
			continue;
		}
		int ans = sum*(100-p);
		ans /= win;
		cout << ans << endl;
	}
	return 0;
}
