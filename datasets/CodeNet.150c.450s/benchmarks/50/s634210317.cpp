#include <stdio.h>
#include <iostream>
#include <string.h>
#include <queue>
#include <algorithm>

using namespace std;

//change

int main(){
	int n;
	int coin[6] = {500, 100, 50, 10, 5, 1};

	while(cin >> n){
		if(!n) return 0;

		int ans=0;
		n = 1000 - n;

		for(int i=0 ; i<6 ; i++){
			int temp = n / coin[i];
			ans += temp;
			n -= temp*coin[i];
		}

		cout << ans << endl;


	}
	return 0;
}