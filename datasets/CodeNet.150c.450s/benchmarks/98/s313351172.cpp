#include<cstdio>

bool solve(){
	int n,m,a[100],b[100],sum_a = 0,sum_b = 0;
	scanf("%d %d",&n,&m);
	if(n==0&&m==0) return false;
	for(int i=0;i<n;i++){
		scanf("%d",a+i);
		sum_a += a[i];
	}
	for(int i=0;i<m;i++){
		scanf("%d",b+i);
		sum_b += b[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(sum_a-a[i]+b[j]==sum_b-b[j]+a[i]){
				printf("%d %d\n",a[i],b[j]);
				return true;
			}
		}
	}
	printf("-1\n");
	return true;
}

int main(){
	while(solve()){}
}