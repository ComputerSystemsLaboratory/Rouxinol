#include <iostream>
#include <math.h>
using namespace std;
int main(){
	while (1){
		int n;
		int sum = 0;
		cin >> n;
		if (n == 0) break;
		int s;
		int max = -1;
		int min = 9999;
		for (int i = 0; i < n; i++){
			cin >> s;
			sum += s;
			if (s >= max) max = s;
			if (s <= min) min = s;
		}
		int ans = floor((sum - max - min) / (n - 2));
		cout << ans << endl;
	}
	return 0;
}