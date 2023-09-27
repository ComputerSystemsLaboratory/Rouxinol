#include <iostream>

using namespace std;

int main(){
        int n, s ;
	while (cin >> n && n > 0){
		int large = 0;
		int small = 1000;
		int sum = 0;
  		for (int i=0; i<n; ++i){
			cin >> s;
			sum = sum + s;
			if (large < s) {large = s;}
			if (small > s) {small = s;}
		}
		int ans = 0;
		ans = (sum - large - small) / (n - 2);
		cout << ans << endl ;
	}
}