#include <cstdio>
using namespace std;

int dfs(int n, int s, int p){
	if(s == 0 && n == 0) return 1;
	if(n == 0 || s < 0) return 0;
	
	int c = 0;
	while(p < 10){
		c += dfs(n - 1, s - p, p + 1);
		p++;
	}
	
	return c;
}

int main(){
	int n, s;
	
	while(true){
		scanf("%d%d", &n, &s);
		if(n + s == 0) break;
		
		printf("%d\n", dfs(n, s, 0));
	}
	
	return 0;
}