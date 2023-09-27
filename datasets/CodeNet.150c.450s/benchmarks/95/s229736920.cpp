#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		int left = 0;
		int right = 0;
		int cnt = 0;
		int dir = 1;
		for(int i=0; i<n; i++){
			string t;
			cin >> t;

			if(t[0] == 'l'){
				left = 1 - left;
			}else{
				right = 1 - right;
			}
			if(left == right && dir == left){
				cnt++;
				dir = 1 - dir;
			}
		}
		cout << cnt << endl;
	}
	
	return 0;
}