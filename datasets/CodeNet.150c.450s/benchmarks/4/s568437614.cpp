#include<cstdio>

int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	while(a + 1 || b + 1 || c + 1){
		if(a + 1 && b + 1){
			if(a + b  > 79){
				printf("A\n");
			}else if(a + b > 64){
				printf("B\n");
			}else if(a + b > 49){
				printf("C\n");
			}else if(a + b > 29){
				if(c > 49){
					printf("C\n");
				}else{
					printf("D\n");
				}
			}else{
				printf("F\n");
			}
		}else{
			printf("F\n");
		}
		scanf("%d %d %d", &a, &b, &c);
	}
	return 0;
}