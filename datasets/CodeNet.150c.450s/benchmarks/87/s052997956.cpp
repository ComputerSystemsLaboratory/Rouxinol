#include<iostream>
#include<cstring>
using namespace std;

int t[25][6];

int main(){
	int n,m;
	int i,j,k;
	int a,b,c;
	int s=0;
	bool flag;
	while(cin>>n){
		if(!n)break;
		memset(t,0,sizeof(t));
		for(i=n-1;i>=0;i--){
			for(j=0;j<5;j++)cin>>t[i][j];
		}
		flag=true,s=0;
		while(flag){
			flag=false;
			for(i=0;i<n;i++){
				for(j=0,k=1;j<4;j++){
					if(t[i][j]==t[i][j+1])k++;
					else{
						if(k>=3 && t[i][j]!=0){
							s+=t[i][j]*k;
							for(;k>0;k--)t[i][j-k+1]=0;
							flag=true;
						}
						k=1;
					}
				}
				if(k>=3 && t[i][j]!=0){
					s+=t[i][j]*k;
					for(;k>0;k--)t[i][j-k+1]=0;
					flag=true;
				}
			}
			for(i=0;i<5;i++){
				for(j=0,k=0;j<n;j++){
					if(t[j][i]==0)continue;
					t[k][i]=t[j][i],k++;
				}
				for(;k<n;k++)t[k][i]=0;
			}
		}
		cout<<s<<endl;
	}
}
			

