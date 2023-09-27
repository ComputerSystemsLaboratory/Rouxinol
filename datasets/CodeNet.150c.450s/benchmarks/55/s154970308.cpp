#include<cstdio>

int main(){
	char c,t;
	scanf("%c", &c);
	while(c - 48){
		int temp = 0;
		while(c - 10){
			temp += (c - 48);
			scanf("%c", &c);
		}
		printf("%d\n", temp);
		scanf("%c", &c);
	}
}