#include <stdio.h>

int findLimit(int num){
	int i;
	for(i = 1; i*i <= num;i++);
	return i-1;
}

int main(){
	int n,tmp,count = 0,limit;
	scanf("%d",&n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&tmp);
		limit = findLimit(tmp);
		for(int j = 2; j <= limit; j++){
			if(tmp%j==0){
				count++;
				break;
			}
		}
	}
	printf("%d\n",n-count);
}