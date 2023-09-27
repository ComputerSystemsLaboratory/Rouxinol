#include <stdio.h>

int main(){
	int i,n,debt = 100000;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		debt = (((int)(debt * 1.05) - 1) / 1000 + 1) * 1000;
	}
	printf("%d\n",debt);
}