#include<stdio.h>
#include<string.h>
long long arr[205][205];
long long min(long long a,long long b) {
	return a>b?b:a;
}
int main() {
	long long n,m;
	while(scanf("%lld %lld",&n,&m)!=EOF) {
		long long x,y,c;
		for(int i=0; i<205; i++) {
			for(int j=0; j<205; j++) {
			arr[i][j]=10000000000;
			}
		}
		for(long long j=1; j<=m; j++) {
			scanf("%lld %lld %lld",&x,&y,&c);
//				arr[x][y]=min(arr[x][y],c);
				arr[x][y]=c;
		}
		for(int k=0; k<n; k++) {
			for(int i=0; i<n; i++) {
				for(int j=0; j<n; j++) {
				    if(arr[i][k]<10000000000&&arr[k][j]<10000000000){
				      arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);	
					}
				}
			}
		}
//		printf("\n");
		int t=0;
		for(int i=0; i<n; i++) {
			if(arr[i][i]<0) {
				t=1;
			}
		arr[i][i]=0;	
		}
		if(t==1) {
			printf("NEGATIVE CYCLE\n");
		} else {
			for(int i=0; i<n; i++) {
				for(int j=0; j<n; j++) {
					if(arr[i][j]==10000000000){
						if(j!=n-1) printf("INF ");
						 else printf("INF");
					}else{
						if(j!=n-1) printf("%lld ",arr[i][j]);
						 else  printf("%lld",arr[i][j]); 
					} 
				}
				printf("\n");
			}
		}
	}
	return 0;
}





























