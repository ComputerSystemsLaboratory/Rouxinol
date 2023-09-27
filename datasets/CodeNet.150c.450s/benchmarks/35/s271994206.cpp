#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
	int n;
	int ary[5010];
	int sum[5020] = { 0 };

	while (cin >> n, n != 0){
		int max_ = numeric_limits<int>::min();
		for (int i = 0; i < n; i++){
			cin >> ary[i];
		}
		for (int i = 1; i < n+1; i++){
			sum[i] = sum[i - 1] + ary[i-1];
		}
		for (int i = 1; i < n + 1; i++){
			for (int j = i; j < n + 1; j++){
				max_ = max(max_, sum[j] - sum[i - 1]);
			}
		}
		cout << max_ << endl;
	}

	return 0;
}