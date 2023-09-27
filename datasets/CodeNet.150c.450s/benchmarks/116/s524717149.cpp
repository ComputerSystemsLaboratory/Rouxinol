#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int num[100000];

int main() {
	while(1){
		int n, k;
		cin >> n >> k;
		if(n == 0 && k == 0)break;
		
		int sum = 0;
		for(int i = 0; i < k; i++){
			cin >> num[i];
			sum += num[i];
		}
			
		int ans = 0;
		for(int i = k; i < n; i++){
			cin >> num[i];
			sum -= num[i - k];
			sum += num[i];
			if(ans < sum)
				ans = sum;
		}
		
		cout << ans << endl;
	}
	return 0;
}