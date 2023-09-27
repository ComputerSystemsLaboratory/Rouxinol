#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int a[100000];

int cal(string str){
	int num[6];
	
	num[0] = str[0] - '0';
	num[1] = str[1] - '0';
	num[2] = str[3] - '0';
	num[3] = str[4] - '0';
	num[4] = str[6] - '0';
	num[5] = str[7] - '0';
	return num[0] * 36000 + num[1] * 3600 + num[2] * 600 + num[3] * 60 + num[4] * 10 + num[5];
}

int main(){
	
	int n;
	
	while(true){
		
		cin >> n;
		if(n == 0){
			break;
		}
		
		for(int i = 0; i < 100000; i++){
			a[i] = 0;
		}
		
		
		for(int i = 0; i < n; i++){
			
			string str1, str2;
			cin >> str1 >> str2;
			
			a[cal(str1)]++;
			a[cal(str2)]--;
			
		}
		
		int ans = 0;
		int cur = 0;
		
		for(int i = 0; i < 100000; i++){
			cur += a[i];
			ans = max(ans, cur);
		}
		
		cout << ans << endl;
	}
	
	return 0;
}