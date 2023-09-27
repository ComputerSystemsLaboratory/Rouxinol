#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while(cin >> n, n) {
		vector<int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		int ans = -100000;		
		for(int i = 0; i < n; i++) {
			int sum = 0;
			for(int j = i; j < n; j++) {
				sum += v[j];
				if(ans < sum) ans = sum;			
			}
		}
		cout << ans << endl;
	}
}