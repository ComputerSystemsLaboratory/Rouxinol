#include<cstdio>

int main(){
	char c = 0;
	while(10 - c){
		scanf("%c", &c);
		if(64 < c && c < 91){
			printf("%c", c + 32);
		}else if(96 < c && c < 123){
			printf("%c", c - 32);
		}else{
			printf("%c", c);
		}
	}
	return 0;
}