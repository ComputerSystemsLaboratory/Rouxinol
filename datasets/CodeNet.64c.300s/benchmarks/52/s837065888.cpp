#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, s;
	for(;;){
		scanf("%d %d", &n, &s);
		if(n == 0 && s == 0) break;
		int ans = 0;
		for(int i = 0; i < (1 << 10); i++){
			int num_1 = 0;
			int sum = 0;
			for(int j = 0; j < 10; j++){
				if(1 << j & i){
					sum += j;
					num_1++;
				}
			}
			if(num_1 == n && sum == s) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}