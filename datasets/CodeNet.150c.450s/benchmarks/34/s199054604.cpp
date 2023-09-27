#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<long> cnt(30, 0);
	cnt[0] = cnt[1] = cnt[2] = 1;
	for(int i = 0; i < 30; i++){
		for(int j = 1; j <= 3; j++){
			if(i+j < 30) cnt[i+j] += cnt[i];
		}
	}
	int n;
	while(cin >> n && n) cout << cnt[n-1] / 3650 + 1 << endl;
	return 0;
}