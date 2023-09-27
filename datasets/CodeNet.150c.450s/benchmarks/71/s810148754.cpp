#include <stdio.h>

int main(){
	int n,answer;

	while( scanf("%d", &n) !=EOF ){
		answer = 0;
		if(n<=36){
			for(int a=0 ; a<=9 ; a++){
				for(int b=0 ; b<=9 ; b++){
					for(int c=0 ; c<=9 ; c++){
						for(int d=0 ; d<=9 ; d++){
							if((a+b+c+d)==n){
								answer++;
							}
						}
					}
				}
			}
		}
		printf("%d\n", answer);
	}

	return 0;
} 