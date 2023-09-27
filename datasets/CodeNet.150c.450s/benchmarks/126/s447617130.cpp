#include<iostream>
#include<cstring>

int dp[17][17];

bool can[17][17];

int main(){
	int a,b,n;//縦　横　個数
	while(std::cin>>a>>b,a*b){
		std::cin>>n;
		for(int i=1;i<=a;i++)for(int j=1;j<=b;j++)dp[i][j]=0,can[i][j]=true;
		for(int i=0;i<n;i++){
			int c,d;
			std::cin>>c>>d;
			can[c][d]=false;
		}
		for(int i=1;i<=a;i++){
			if(!can[i][1]){
				break;
			}
			dp[i][1]=1;
		}
		for(int i=1;i<=b;i++){
			if(!can[1][i]){
				break;
			}
			dp[1][i]=1;
		}
		for(int i=2;i<=a;i++){
			for(int j=2;j<=b;j++){
				if(can[i][j]){
					int sum=0;
					if(can[i-1][j])sum+=dp[i-1][j];
					if(can[i][j-1])sum+=dp[i][j-1];
					dp[i][j]=sum;
				}
			}
		}
		std::cout<<dp[a][b]<<std::endl;
		a=0,b=0,n=0;
	}
	return 0;
}