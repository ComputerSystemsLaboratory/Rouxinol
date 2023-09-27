#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

long long int a[1000000];

int main(){
	
	int n, k;
	
	while(true){
	
	cin >> n >> k;
		if(n == 0){
			break;
		}
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	long long int max = -1000000000000000;
	
	long long int cur = 0;
	
	for(int i = 0; i < k; i++){
		cur += a[i];
	}
	
	for(int i = k; i < n; i++){
		if(max < cur){
			max = cur;
		}
		cur += a[i] - a[i - k];
		if(max < cur){
			max = cur;
		}
	}
	
	cout << max << endl;
	}
	return 0;
}