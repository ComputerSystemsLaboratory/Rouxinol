#include <stdio.h>

using namespace std;

int calcLimit(int n){
	int limit;
	for(limit=0;limit*limit<=n;limit++);
	return limit-1;
}

int main(){
	int n,count,limit;

	while(scanf("%d",&n)!=EOF){
		count=0;
		int* array = new int[n+1];
		for(int i=1;i<=n;i++)array[i]=0;
		limit = calcLimit(n);
		for(int i=2;i<=limit;i++){
			if(array[i] == 0)
			{
				for(int j=2*i;j<=n;j+=i){
					if(array[j]==0){
						array[j]=1;
						count++;
					}
				}
			}
		}
		printf("%d\n",n-(count+1));
	}

    return 0;
}