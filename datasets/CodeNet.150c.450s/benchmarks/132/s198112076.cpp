#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 1000000000;
const int MOD = 1000000007;

int main(void) {
	while(1){
		int n, p;
		int st[100] = {0};
		cin >> n >> p;
		if(n == 0 && p == 0) break;

		int i = 0;
		int wan = p;
		while(1){
			if(wan > 0){
				st[i]++;
				wan--;
				if(st[i] == p){
					printf("%d\n", i);
					break;
				}
			}else{
				wan += st[i];
				st[i] = 0;
			}
			/*
			for(int j=0; j<n; j++){
				printf("%d:%d\n", j, st[j]);
			}
			puts("");
			*/
			i++;
			i%=n;
		}
	}
	
	return 0;
}