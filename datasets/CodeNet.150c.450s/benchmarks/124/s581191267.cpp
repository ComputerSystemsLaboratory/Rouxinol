#include<stdio.h>
#include<string.h>
long long arr[205][205];
long long min(long long a,long long b){
	return a>b?b:a;
}
int main() {
    int n,m;
    while(scanf("%d",&n)!=EOF){
    	long long x,y,c,d;
    	for(int i=0;i<205;i++){
    		for(int j=0;j<205;j++){
    		 arr[i][j]=10000000;	
			}
		}
    	for(int j=0;j<n;j++){
    	scanf("%lld %lld",&x,&y);
    	for(int h=0;h<y;h++){
    		scanf("%lld %lld",&c,&d);
    		arr[x][c]=min(arr[x][c],d);
		}
		}
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
			}
		}
	}
	printf("0 0\n");
	for(int i=1;i<n;i++){
    printf("%d %lld\n",i,arr[0][i]);
   }
    }
	return 0;
}































