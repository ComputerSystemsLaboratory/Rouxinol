#include <iostream>
#include <cmath>
#define INF 2000000000
using namespace std;

int main(){
	int n,k,a[100001];
	while(1){
		a[0] = 0;
		cin >> n >> k;
		if(n == 0 && k == 0) break;
		for(int i = 0;i < n;i++) {
			int t;
			cin >> t;
			a[i + 1] = a[i] + t;
		}
		int ma = -INF;
		for(int i = 0;i <= n - k;i++){
			ma = max(ma,a[i + k] - a[i]);
		}
		cout << ma << endl;
	}
	return 0;	
}