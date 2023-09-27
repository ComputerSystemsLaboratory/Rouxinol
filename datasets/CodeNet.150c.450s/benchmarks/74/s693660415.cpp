#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<int> c;
int dp[50001][20];
void sortt(){
	sort(c.begin(),c.end());
	reverse(c.begin(),c.end());
}

void ume(){

	for(int i=0;i<20;++i){
		dp[0][i]=0;
		for(int j=1;j<50001;++j){
			dp[j][i]=100000;
		}
	}
}
void toku(){
	for(int i=1;i<n+1;++i){//??????
		for(int j=0;j<m;++j){//?????¨???????????????
			if(i-c[j]>=0){
				dp[i][j]=dp[i-c[j]][j]+1;
			}
			if(j!=0){

				dp[i][j]=min(dp[i][j],dp[i][j-1]);
			}

		}
	}
}


int main(){
	
	cin>>n>>m;
	
	for(int i=0;i<m;++i){
		int a;
		cin>>a;
		c.emplace_back(a);


	}
	sortt();
	ume();
	toku();

	

	cout<<dp[n][m-1]<<endl;
}