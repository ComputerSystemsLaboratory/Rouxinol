#include <iostream>
using namespace std;

int main(){
	int n;
	while (1){
		cin >> n;
		if (n == 0) break;
		int start, end,sum;
		int cnt = 0;
		for (int i = 1; i < n-1; i++){
			start = i;
			sum = i;
			for (int j = i + 1; j < n; j++){
				sum += j;
				if (sum >= n) break;
			}
			if (sum == n) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}