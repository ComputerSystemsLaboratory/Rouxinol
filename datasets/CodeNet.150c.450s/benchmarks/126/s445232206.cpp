# include <iostream>
# include <cstring>

const int MAX=16;

int w,h;
int n;

int dp[MAX][MAX];

int main(){
	while(1){
		std::cin>>w>>h;
		if(w+h==0)
			break;
		for(int i=0;i<h;++i){
			for(int j=0;j<w;++j)
				dp[i][j]=1;
		}
		std::cin>>n;
		int x,y;
		for(int i=0;i<n;++i){
			std::cin>>x>>y;
			--x;
			--y;
			dp[y][x]=0;
		}
		bool flag=false;
		for(int i=0;i<w;++i){
			if(flag)
				dp[0][i]=0;
			else if(!dp[0][i])
				flag=true;
		}
		flag=false;
		for(int i=0;i<h;++i){
			if(flag)
				dp[i][0]=0;
			else if(!dp[i][0])
				flag=true;
		}

		for(int i=1;i<h;++i){
			for(int j=1;j<w;++j){
				if(!dp[i][j])
					dp[i][j]=0;
				else
					dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		std::cout<<dp[h-1][w-1]<<std::endl;
	}
	return 0;
}