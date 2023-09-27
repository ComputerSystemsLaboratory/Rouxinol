#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int main(){
	
	while(true){
		
		long long int N, M;
		
		cin >> N >> M;
		if(N == 0 && M == 0){
			break;
		}
		
		long long int a[20];
		
		for(int i = 0; i < 20; i++){
			a[i] = 0;
		}
		
		for(int i = 0; i < N; i++){
			int num1, num2;
			cin >> num1 >> num2;
			a[num2] += num1;
		}
		
		long long int ans = 0;
		
		for(int i = 10; i >= 0; i--){
			long long int ret = max(0LL, a[i] - M);
			ans += ret * i;
			M = max(0LL, M - a[i]);
		}
		
		cout << ans << endl;
	}
	
	return 0;
}