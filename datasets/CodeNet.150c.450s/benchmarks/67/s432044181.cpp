#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int ans[10000];

int main(){
	
	for(int i = 0; i < 10000; i++){
		ans[0] = 0;
	}
	
	for(int i = 1; i <= 1000; i++){
		int sum = 0;
		for(int j = i; j <= 1000; j++){
			sum += j;
			if(sum > 1000){
				break;
			}
			if(j - i > 0){
				ans[sum]++;
			}
		}
	}
	
	int N;
	
	while(true){
		cin >> N;
		if(N == 0){
			break;
		}
		cout << ans[N] << endl;
	}
	
	return 0;
}