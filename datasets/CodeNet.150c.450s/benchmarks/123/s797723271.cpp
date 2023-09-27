#include <stdio.h>
#include <cmath>
#include <algorithm>

int main(){
	int n,tmp,count = 0,limit;
	scanf("%d",&n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d",&tmp);
		limit = sqrt(tmp);
		for(int j = 2; j <= limit; j++){
			if(tmp%j==0){
				count++;
				break;
			}
		}
	}
	printf("%d\n",n-count);
}