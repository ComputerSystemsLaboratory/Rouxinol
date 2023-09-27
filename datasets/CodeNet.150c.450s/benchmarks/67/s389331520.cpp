#include <cstdio>

int main(){
	int n;
	while(scanf("%d",&n),n){
		int ans = 0;
		for(int i = 1; i < n; i++){
			int t = i;
			for(int j = 1;;j++){
				t += (i+j);
				if(t >= n){
					if(t == n) ans++;
					break;
				}
			}
		}
		printf("%d\n", ans);
	}
}