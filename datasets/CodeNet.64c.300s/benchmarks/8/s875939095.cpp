#include <cstdio>
int pro[101];

int main(){
	int n;scanf("%d", &n);
	for(int i = 1;i <= n;i++){
		int x = i, f = 0;
		if(x % 10 == 3)f = 1;
		while(x>10){x /= 10;if(x % 10 == 3)f = 1;}
		if(i%3==0||f)printf(" %d", i);
	}
	puts("");
	return 0;
}