#include<iostream>
#include<algorithm>

using namespace std;
typedef long long Int;

Int n, k, sum, res;
Int a[108000];

int main(){
	while(true){
		cin >> n >> k;
		if(n == 0 && k == 0)break;
		
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}

		sum = 0;
		for(int i = 0;i < k;i++){
			sum += a[i];
		}
		res = sum;

	for(int i = k;i < n;i++){
		sum -= a[i-k];
		sum += a[i];
		res = max(res, sum);
	}
	cout << res << endl;
	}
	return 0;
}