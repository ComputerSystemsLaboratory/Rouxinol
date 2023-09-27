#include<cstdio>

int main(){
	char str[20];
	char c;
	int i = -1;
	scanf("%c", &c);
	while(c - 10){
		i++;
		str[i] = c;
		scanf("%c", &c);
	}
	for(; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}