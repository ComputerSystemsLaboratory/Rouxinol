#include<cstdio>

int main(){
	int a,b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	while(c != '?'){
		if(c == '+'){
			printf("%d\n", a + b);
		}else if(c == '-'){
			printf("%d\n", a - b);
		}else if(c == '*'){
			printf("%d\n", a * b);
		}else{
			printf("%d\n", a / b);
		}
		scanf("%d %c %d", &a, &c, &b);
	}
	return 0;
}