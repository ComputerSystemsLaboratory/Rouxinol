#include <iostream>
using namespace std;
int a,b;
int main(){
while(1){
	cin>>a>>b;
	if(a==0 && b==0){
		break;
	}
	int dp[25][25]={},n=0,xi=0,yi=0,k[50][50]={};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>yi>>xi;
		k[yi][xi]=-1;
	}
	if(k[1][1]!=-1){
		dp[1][1]=1;
	}
	for(int y=1;y<=a;y++){
		for(int x=1;x<=b;x++){
			if(k[y][x]!=-1 && (x!=1 || y!=1)){
				dp[y][x]=dp[y-1][x]+dp[y][x-1];
			}
		}
	}
	cout<<dp[a][b]<<endl;
	}
}