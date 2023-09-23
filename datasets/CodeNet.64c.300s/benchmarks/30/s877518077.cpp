#include <cstdio>

int main(){
	int n;
	int a[6] = {500,100,50,10,5,1};
	while(scanf("%d",&n), n!= 0){
		int t = 0;
		n = 1000 - n;
		for(int i = 0; i < 6; i++){
			t += n / a[i];
			n %= a[i];
		}
		printf("%d\n",t);
	}
	return 0;
}
		