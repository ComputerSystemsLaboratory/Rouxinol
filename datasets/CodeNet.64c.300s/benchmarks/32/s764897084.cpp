#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long long min, max, sum, n, i;
	cin >> n;
	int a[n];
	
	for(i = 0; i <= n-1; i++){
		cin >> a[i];
	}
	
	min = a[0];
	max = a[0];
	sum = a[0];
	
	for(i = 1; i <= n-1; i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	
	for(i = 1; i <= n-1; i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	
	for(i = 1; i <= n-1; i++){
		sum += a[i];
	}
	
	printf("%lld %lld %lld\n", min, max, sum);
	return 0;
}