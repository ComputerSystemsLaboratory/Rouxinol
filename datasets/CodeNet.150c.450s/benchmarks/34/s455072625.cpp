#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
	
	long long int ans[40];
	
	for(int i = 0; i < 40; i++){
		ans[i] = 0;
	}
	
	ans[0] = 1;
	
	for(int i = 0; i < 31; i++){
		ans[i + 3] += ans[i];
		ans[i + 2] += ans[i];
		ans[i + 1] += ans[i];
	}
	
	while(true){
		
		int n;
		
		cin >> n;
		
		if(n == 0){
			break;
		}
		
		cout << (ans[n] + 3649) / 3650 << endl;
		
	}
	
	return 0;
}