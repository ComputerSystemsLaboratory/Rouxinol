#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	int e;
	while(cin >> e, e){
		int x, y, z;
		int ans = INT_MAX;

		for(int i=0; i<=1000; i++){
			for(int j=0; j<=100; j++){
				x = e - i*i - j*j*j;
				if(x >= 0){
					ans = min(ans, x + i + j);
				}
			}
		}

		cout << ans << endl;
	}
	
	return 0;
}