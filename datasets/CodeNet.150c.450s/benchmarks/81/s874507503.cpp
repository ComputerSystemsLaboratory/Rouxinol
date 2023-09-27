#include<iostream>
#include<algorithm>

#define inf 1000000000

using namespace std;

int main(){
	while(1){
		int n;
		int in1[100];
		int in2[100];
		int in3[100];
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			cin>>in1[i]>>in2[i]>>in3[i];
		}
		int maxi=0;
		for(int i=0;i<n;i++){
			maxi=max(maxi,in1[i]);
			maxi=max(maxi,in2[i]);
		}
		
		
		int m=maxi+1;
		
		int C[100][100];
		for(int i=0;i<100;i++){
			for(int j=0;j<100;j++){
				C[i][j]=inf;
			}
		}
		for(int i=0;i<n;i++){
			C[in2[i]][in1[i]]=C[in1[i]][in2[i]]=in3[i];
		}
		
		for(int k=0;k<m;k++){
			for(int i=0;i<m;i++){
				for(int j=0;j<m;j++){
					C[i][j]=min(C[i][j],C[i][k]+C[k][j]);
				}
			}
		}
		
		
		int maxo;
		int maxn=inf;
		int ans[100];
		for(int i=0;i<m;i++){
			ans[i]=0;
			for(int j=0;j<m;j++){
				ans[i]+=C[i][j];
			}
			ans[i]-=C[i][i];
			if(maxn>ans[i]){
				maxn=ans[i];
				maxo=i;
			}
		}
		
		printf("%d %d\n",maxo,maxn);
	}
}