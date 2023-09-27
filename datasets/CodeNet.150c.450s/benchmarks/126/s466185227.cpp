#include<iostream>

using namespace std;

#define MAX 16

int main(){

	int a,b,n;
	int na,nb;
	bool road[MAX+2][MAX+2];
	int dp[MAX+2][MAX+2];
	int dx[]={0,1};
	int dy[]={1,0};
	int m;

	while(1){

		cin>>a>>b;
		if(a==0&&b==0) break;

		for(int i=0;i<MAX+2;i++){
			for(int j=0;j<MAX+2;j++){
				road[i][j]=false;
				dp[i][j]=0;
			}
		}

		for(int i=1;i<=b;i++){
			for(int j=1;j<=a;j++){
				road[i][j]=true;
			}
		}

		cin>>n;

		for(int i=0;i<n;i++){
			cin>>na>>nb;
			road[nb][na]=false;
		}

		dp[1][1]=1;

		for(int i=1;i<=b;i++){
			for(int j=1;j<=a;j++){
				if(dp[i][j]>=1){
					for(int k=0;k<2;k++){
						if(road[i+dy[k]][j+dx[k]]==true){
							dp[i+dy[k]][j+dx[k]]+=dp[i][j];
						}
					}
				}
			}
		}

		cout<<dp[b][a]<<endl;

	}
	
	return 0;
}