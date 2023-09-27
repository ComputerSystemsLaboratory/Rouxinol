#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <stack>
typedef long long int lli;
using namespace std;

/*
long long int dp[1001][2][2][2];
int main(){
	for(int i=0; i<1001; ++i){
		for(int j=0; j<2; ++j){
			for(int k=0; k<2; ++k){
				for(int l=0; l<2; ++l){
					dp[i][j][k][l]=0;
				}
			}
		}
	}
	int N;
	cin >> N;
	string str;
	cin >> str;
	if(str[0]=='J'){
		for(int i=0;i<2; ++i){
			for(int j=0; j<2; ++j){
				dp[1][1][i][j]=1;
			}
		}
	} else if(str[0]=='O'){
		for(int i=0; i<2; ++i){
			dp[1][1][1][i]=1;
		}
	} else if(str[0]=='I'){
		for(int i=0; i<2; ++i){
			dp[1][1][i][1]=1;
		}
	}

	for(int i=2; i<=N; ++i){
		if(str[i-1]=='J'){
			dp[i][1][0][0]+=(dp[i-1][1][0][0]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][1][0]+=(dp[i-1][1][0][0]+dp[i-1][0][1][0]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][0][1]+=(dp[i-1][1][0][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][1][1]+=(dp[i-1][1][0][0]+dp[i-1][0][1][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
		} else if(str[i-1]=='O'){
			dp[i][0][1][0]+=(dp[i-1][0][1][0]+dp[i-1][1][1][0]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][1][0]+=(dp[i-1][1][0][0]+dp[i-1][0][1][0]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][0][1][1]+=(dp[i-1][0][1][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][1][1]+=(dp[i-1][1][0][0]+dp[i-1][0][1][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
		} else if(str[i-1]=='I'){
			dp[i][0][0][1]+=(dp[i-1][0][0][1]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][0][1]+=(dp[i-1][1][0][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][0][1][1]+=(dp[i-1][0][1][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
			dp[i][1][1][1]+=(dp[i-1][1][0][0]+dp[i-1][0][1][0]+dp[i-1][0][0][1]+dp[i-1][1][1][0]+dp[i-1][1][0][1]+dp[i-1][0][1][1]+dp[i-1][1][1][1])%10007;
		}
	}
	long long int ans=0;
	for(int i=0; i<2; ++i){
		for(int j=0; j<2; ++j){
			for(int k=0; k<2; ++k){
				ans+=dp[N][i][j][k]%10007;
			}
		}
	}
	cout << ans%10007 << "\n";
	return 0;
}
/*
int main(){
	int N,M;
	cin >> N >> M;
	vector<int> cost(N);
	vector<int> border(M);
	vector<int> pnt(N);
	for(int i=0; i<N; ++i){
		cin >> cost[i];
	}
	for(int i=0; i<M; ++i){
		cin >> border[i];
	}
	for(int i=0; i<M; ++i){
		for(int j=0; j<N; ++j){
			if(border[i]>=cost[j]){
				++pnt[j];
				break;
			}
		}
	}
	int max_p=-1;
	int ans;
	for(int i=0; i<N; ++i){
		if(pnt[i]>max_p) {
			max_p=pnt[i];
			ans=i+1;
		}
	}
	cout << ans << "\n";
	return 0;
}*/
/*
int main(){
	int hoge[5];
	int sum=0;
	for(int i=0; i<5; ++i){
		cin >> hoge[i];
		if(hoge[i]<40) hoge[i]=40;
		sum+=hoge[i];
	}
	cout << sum/5 << "\n";
	return 0;
}*/

/*
int abs(int x){
	if(x<0) return x*-1;
	else return x;
}

int main(){
	int W,H,N,ans=0;
	cin >> W >> H >> N;
	vector<pair<int,int> > xy(N);
	for(int i=0; i<N; ++i){
		cin >> xy[i].first >> xy[i].second;
	}
	int sx=xy[0].first;
	int sy=xy[0].second;
	for(int i=1; i<N; ++i){
		int gx=xy[i].first;
		int gy=xy[i].second;
		if((sx<=gx&&sy<=gy)||(gx<=sx&&gy<=sy)){
			if(abs(sx-gx)<abs(sy-gy)){
				ans+=abs(sy-gy);
			} else {
				ans+=abs(sx-gx);
			}
		} else {
			ans+=abs(sx-gx)+abs(sy-gy);
		}
		sx=gx;
		sy=gy;
	}
	cout << ans << "\n";
	return 0;
}*/

int main(){
	int n;
	vector<int> tmp(100+1);
	while(cin>>n&&n){
		++tmp[n];
	}
	int MAX=0;
	for(int i=1; i<=100; ++i){
		if(MAX<tmp[i]) MAX=tmp[i];
	}
	for(int i=1; i<=100; ++i){
		if(MAX==tmp[i]) cout << i << "\n";
	}
	return 0;
}