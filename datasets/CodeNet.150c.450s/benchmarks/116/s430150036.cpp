#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int a[200000];

int main(){
	int n, k;
	while(true){
		cin >> n >> k;
		if(n == 0 && k == 0){
			break;
		}
		
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		
		long long int max;
		long long int sum;
		
		sum = 0;
		
		for(int i = 0; i < k; i++){
			sum += a[i];
		}
		
		max = sum;
		
		for(int i = k; i < n; i++){
			sum += a[i];
			sum -= a[i - k];
			if(max < sum){
				max = sum;
			}
		}
		
		printf("%lld\n", max);
	}
	return 0;
}