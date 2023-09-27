#include <cstdio>

int stack[10];
int cur = 0;

void push(int x){
	stack[cur] = x;
	cur++;
}

int pop(){
	cur--;
	return stack[cur];
}

int main(){
	int n;
	
	scanf("%d", &n);
	push(n);
	while(scanf("%d", &n) != EOF){
		if(n == 0){
			printf("%d\n", pop());
		}else {
			push(n);
		}
	}
	return 0;
}