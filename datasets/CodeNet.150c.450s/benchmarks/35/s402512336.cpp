#include <stdio.h>
int main()
{
	int n,a[5000];
	while(1){
		int max=-100001;
		scanf("%d",&n);
		if(n==0)
			break;
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(int i=0;i<n;i++){
			int sum=0;
			for(int j=i;j<n;j++){
				sum+=a[j];
				if(max<sum)
					max=sum;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}