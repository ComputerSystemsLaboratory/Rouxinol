#include <iostream>
#include <cstdio>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
using namespace std;

int main(void){
	while(1){
		int n;
		cin >> n;
		if(n == 0) break;
		bool f1 = 0;
		bool f2 = 0;
		bool ok = 0;
		int ans = 0;
		for(int i=0; i<n; i++){
			string t;
			cin >> t;

			if(t[0] == 'l') f1 = f1 - 1;
			if(t[0] == 'r') f2 = f2 - 1;
			if(f1 == 1 && f2 == 1 && ok == 0){ ans++; ok = 1;}
			if(f1 == 0 && f2 == 0 && ok == 1){ ans++; ok = 0;}
		}

		cout << ans << endl;

	}


	return 0;
}