#include <stdio.h>
int main()
{
	int n,x;
	while(1){
		int count=0;
		scanf("%d %d",&n,&x);
		if(n==0&&x==0)
			break;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					if(i+j+k==x)
						count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}