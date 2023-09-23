#include <cstdio>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int y, d, m;
		int ans = 0;
		scanf("%d%d%d", &y, &m, &d);
		ans += 200*((y-1)/3);
		ans += 195*(y-1-(y-1)/3);
		if(y%3 == 0) ans += 20*(m-1);
		else{
			ans += 19*((m-1)/2);
			ans += 20*(m-1-(m-1)/2);
		}
		ans += d-1;
		printf("%d\n", 196470-ans);
	}
}