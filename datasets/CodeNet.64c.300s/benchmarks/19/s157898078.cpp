#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
	const int nmax = 5001;
	int n;
	int nums[nmax];
	while(cin >> n){
		if(n == 0) break;
		int a;
		for(int i = 1;i <= n; i++){
			cin >> a;
			nums[i] = a;
		}
		int total_max = -2147483648;
		for(int i = 1; i <= n; i++){
			int total = 0;
			for(int j = i; j <= n; j++){
				total += nums[j];
				total_max = max(total_max, total);
			}
		}
		cout << total_max << endl;
	}
	return 0;
}