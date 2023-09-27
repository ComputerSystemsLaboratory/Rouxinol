#include <iostream>
using namespace std;

int main(){
	long long n, a[10000] = {0};
	long long  min, max, sum = 0;
	
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	min = max = a[0];
	for(int i = 0; i < n; i++){
		if(min > a[i]){
			min = a[i];
		}
		if(max < a[i]){
			max = a[i];
		}
		sum += a[i];
	}
	
	cout << min << ' ' << max << ' ' << sum << endl;
	
	return 0;
}