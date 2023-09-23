#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int coin[10] = {0, 1, 2, 3, 4, 1, 2, 3, 4, 5};

int main(){
	int n, ans;
	while(true){
		cin >> n;
		if(n == 0){
			break;
		}
		
		n = 1000 - n;
		ans = 0;
		for(int loop = 0; loop < 4; loop++){
			ans += coin[n % 10];
			n /= 10;
		}
		
		printf("%d\n", ans);
	}
	return 0;
}