#include <iostream>
using namespace std;

int main(){
	int n, k, a[100000] = {};
	long long int sum = -10000000, tmp;
	while(cin >> n >> k){
		if(n == 0 && k == 0) break;
		tmp = 0;
		for(int i = 0;i<n;i++){
			cin >> a[i];
			if(i < k) tmp += a[i];
		}
		for(int i = 0;i + k<n;i++){
			if(sum < tmp) sum = tmp;
			tmp = tmp - a[i] + a[i+k];
		}
		cout << sum << endl;
	}
	return 0;
}