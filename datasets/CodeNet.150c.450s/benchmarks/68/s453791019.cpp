#include <stdio.h>
#include <algorithm>

using namespace std;

int n;
int minn = 200;
int a[1002];
int i;int j;int dif;

int main(){
	while(1){
		scanf("%d",&n);
		if(n==0) break;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		minn = 1000002;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				dif = a[i]-a[j];
				if(dif<0) dif*=(-1);
				if(minn>dif) minn = dif;
			}
		}
		printf("%d\n",minn);
	}	
	return 0;
}
