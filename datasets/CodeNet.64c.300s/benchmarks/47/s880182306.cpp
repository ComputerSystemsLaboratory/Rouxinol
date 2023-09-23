#include <cstdio>

int val[101],a,mx;

int main(){
	mx = 0;
	while(scanf("%d",&a) != EOF){
		val[a]++;
		if(val[a] > mx){
			mx = val[a];
		}
	}
	for(int i = 1; i <= 100; i++){
		if(val[i] == mx){
			printf("%d\n",i);
		}
	}
	return 0;
}