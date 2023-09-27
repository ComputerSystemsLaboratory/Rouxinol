#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	while(1){
		int n, p;
		cin >> n >> p;
		if(n == 0 && p == 0) break;

		vector<int> stone(n, 0);
		int bawl = p;
		int win = -1;
		while(1){
			for(int i=0; i<n; i++){
				if(bawl > 0){
					bawl--;
					stone[i]++;
					if(bawl == 0 && stone[i] == p) win = i;
				}else{
					bawl = stone[i];
					stone[i] = 0;
				}
			}
			if(win != -1) break;
		}
		cout << win << endl;
	}
	
	return 0;
}