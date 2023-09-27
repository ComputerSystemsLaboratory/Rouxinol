#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, p;
	while(1){
		cin >> n >> p;
		if(n == 0 && p == 0) break;

		int ma[100] = {};

		int cnt = 0;
		int wan = p;
		while(1){
			if(wan != 0){
				ma[cnt]++;
				wan--;
				if(wan == 0 && ma[cnt] == p){
					cout << cnt << endl;
					break;
				}
			}else{
				wan = ma[cnt];
				ma[cnt] = 0;
			}
			cnt = (cnt + 1) % n;
			//cout << wan << endl;
		}
		
	}

	return 0;
}