#include <cstdio>

int main(){
	int n = 1;
	
	while(n){
		scanf("%d", &n);
		if(n == 0)break;
		int ac, bc;
		ac = bc = 0;
		for(int i = 0;i < n;i++){
		int a, b;
		scanf("%d%d", &a, &b);
			if(a > b){ac += a + b;}
			else if(a == b){ac += a, bc += b;}
			else {bc += a + b;}
		}
		printf("%d %d\n", ac, bc);
	}
	return 0;
}