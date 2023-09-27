#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
#define INF 10000000
int senbei[10][10000];
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
	while(1){	
		int r,c,i,count,a,ans=0;
		int d[10];
		cin>>r>>c;
		if(r==0&&c==0)break;
		for(i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>senbei[i][j];	
			}	
		}
		for (i = 0; i <=(1 << r); i++) {
			a=0;
			for (int j = 0; j < r; j++) {
				d[j]=((i >> j) & 1);
			}
			for(int j=0;j<c;j++){
				count=0;
				for(int k=0;k<r;k++){
					if(senbei[k][j]==d[k]){
						count++;
					}
				}
				if(count>r/2){
					a+=count;
				}else{
					a+=(r-count);
				}
			}
			ans=max(ans,a);
		}
		cout<<ans<<endl;
	}

	return 0;
}	