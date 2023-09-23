#include <iostream>
using namespace std;


int main(){
	while (true)
	{
		int n, a[5001] = {};
		long long int ans = -100000, sum;
		cin >> n;
		if (n == 0) { break; }
		for(int i = 0;i<n;i++){
			cin >> a[i];
		}
		for(int i = 0;i<n;i++){
			sum = 0;
			for(int j = i;j<n;j++){
				sum += a[j];
				if(sum > ans){
					ans = sum;
				}
			}
		}

		cout << ans << endl;
	}
	return 0;
}