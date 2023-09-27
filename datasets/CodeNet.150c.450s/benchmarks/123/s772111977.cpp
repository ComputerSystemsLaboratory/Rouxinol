#include <iostream>
using namespace std;

int main(){
	int n; cin >> n;
	int cnt = 0;
	for (int i = 0; i < n; ++i){
		long tmp; cin >> tmp;
		bool prime = true;
		if (tmp == 1) { prime = false; continue; }
		for (int j = 2; j*j <= tmp; ++j){
			if (tmp%j == 0) {
				prime = false; break;
			}
		}
		if (prime) ++cnt;
	}
	cout << cnt << '\n';
}