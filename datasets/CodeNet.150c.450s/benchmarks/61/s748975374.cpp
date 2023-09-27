#include<cstdio>

int n,a,b,c,x;
int y[101];
int main(void){
	while(1){
		scanf("%d %d %d %d %d",&n,&a,&b,&c,&x);
		if(n+a+b+c+x==0)break;
		for(int i=0;i<n;i++){
			scanf("%d",&y[i]);
		}
		int cnt=0,j=0;
		while(j<n && cnt<=10000){
			if(x==y[j])j++;
			if(j<n)cnt++;
			x=(a*x+b)%c;
		}
		printf("%d\n",cnt<=10000?cnt:-1);
	}
	return 0;
}