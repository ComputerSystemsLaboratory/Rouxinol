#include<iostream>
#include<string>
#include<set>
#include<utility>
#include<vector>
#include<map>
#include<algorithm>
#include<queue>

using namespace std;



//最高のピザ
/*
int n,a,b,c;
int A[110];
int dp[110][110];

int main(){
	cin >> n >> a >> b >> c;

	for(int i=0; i<n; i++){
		cin >> A[i];
	}

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			dp[i][j] = max(dp[i-1][j], dp[i][j-1] + A[i]);
		}
	}

	int ans = c/a;
	for(int i=0; i<=n; i++){
		ans = max(ans, (dp[n][i]+c)/(a + b*i) );
	}

	cout << ans << endl;
	*/
	/*
	int x = 0;
	dp[0].first = 0;

	for(int j=0; j<n; j++){
		//X.push_back(temp);
		if(dp[j].first < dp[j].first + A[j]){
			dp[j+1].first = dp[j].first + A[j];
			dp[j+1].second = x;
		}
		else{
			dp[j+1] = dp[j];
		}
		//dp.push_back(-1);
	}

	int ans = 0;
	for(int i=0; i<n+1; i++){
		ans = max( (dp[i].first + c)/(dp[i].second * b + a), ans);
	}

	cout << ans << endl;
	*/
	//cout << solve(0) << endl;

//チーズ

int h,w,n;
pair<int,int> factory[10];
int cost[1000][1000];
queue< pair<int,int> > que;
string S[1000];

void Solve(pair<int,int> Now){
	//上
	if(Now.first - 1 >= 0 && S[Now.first - 1][Now.second] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first - 1][Now.second]){
			 cost[Now.first - 1][Now.second] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first -1, Now.second));
		}
	}
	//下
	if(Now.first + 1 < h && S[Now.first + 1][Now.second] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first + 1][Now.second]){
			 cost[Now.first + 1][Now.second] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first + 1, Now.second));
		}
	}
	//hidari
	if(Now.second - 1 >= 0 && S[Now.first][Now.second - 1] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first][Now.second - 1]){
			 cost[Now.first][Now.second - 1] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first, Now.second - 1));
		}
	}
	//r
	if(Now.second +1 < w && S[Now.first][Now.second + 1] != 'X'){
		if(cost[Now.first][Now.second] + 1 < cost[Now.first][Now.second + 1]){
			 cost[Now.first][Now.second + 1] = cost[Now.first][Now.second] + 1;
			 que.push(make_pair(Now.first , Now.second + 1));
		}
	}
}

int main(){
	//チーズ
	
	cin >> h >> w >> n;

	for(int i=0; i<h; i++){
		cin >> S[i];
	}

	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++){
			if(S[i][j] == 'S'){
				factory[0] = make_pair(i, j);
			}
			else if(S[i][j] != 'X' && S[i][j] != '.'){
				factory[S[i][j]-'0'] = make_pair(i,j);
			}
		}
	}


	int ans = 0;
	for(int i=0; i<n; i++){
		
		for(int j=0; j<h; j++){
			for(int k=0; k<w; k++){
				cost[j][k] = 999999;
			}
		}

		cost[factory[i].first][factory[i].second] = 0;
		que.push(factory[i]);
		while(!que.empty()){
			Solve(que.front());
			que.pop();
		}
		ans += cost[factory[i+1].first][factory[i+1].second];
	}

	cout << ans << endl;


	return 0;	
}
