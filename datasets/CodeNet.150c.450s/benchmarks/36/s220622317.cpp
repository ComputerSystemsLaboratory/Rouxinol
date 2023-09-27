#include <stdio.h>

int main(){
	int i,d,s;
	while(scanf("%d",&d) != EOF){
		s = 0;
		for(i = 1;i < 600 / d;i++){
			s += i * i * d * d * d;
		}
		printf("%d\n",s);
	}
}