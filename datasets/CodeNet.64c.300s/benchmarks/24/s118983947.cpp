#include<stdio.h>
int main()
{
	int n,a,b,ar=0,br=0;
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d%d",&a,&b);
			if(a>b){
				ar+=(a+b);
			}else if(a==b){
				ar+=a;
				br+=b;
			}else{
				br+=(a+b);
			}
		}
		printf("%d %d\n",ar,br);
		ar=0;
		br=0;
	}
	return 0;
}