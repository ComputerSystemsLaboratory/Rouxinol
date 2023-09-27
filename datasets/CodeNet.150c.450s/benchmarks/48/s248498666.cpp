#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <sstream>

using namespace std;

int main(){
	
	int n;
	
	while(true){
		
		cin >> n;
		if(n == 0){
			break;
		}
		
		int ans = 1000000;
		
		for(int i = 0; i <= 100; i++){
			for(int j = 0; j <= 1000; j++){
				if(i * i * i + j * j > n){
					break;
				}
				ans = min(ans, i + j + n - i * i * i - j * j);
			}
		}
		
		cout << ans << endl;
		
	}
	
	return 0;
}