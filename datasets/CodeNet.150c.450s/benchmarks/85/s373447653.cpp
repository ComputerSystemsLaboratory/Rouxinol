#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n;//計算する行列の数
const int MAX_N =110;
int dp[MAX_N][MAX_N];//dp[i][j]:=Ai...Ajの計算に必要な最小のコスト
pii A[MAX_N];//行列firstを行secondを列とする。
int B[MAX_N+1][MAX_N+1]; //B[i][j]:=Ai...Ajに最適な括弧を挿入する場所
void init(){
	for(int i =0; i < n;i++){
		for(int j = 0;j < n;j++){
			dp[i][j]=INF;
			B[i][j]=0;
		}
	}
	for(int i =0;i < n;i++){
		dp[i][i]=0;
	}
}
//計算
int solve(){
	for(int k =1;k <n;k++){//個数
		for(int i =0;i <n-k;i++){//何処から始めるか
			for(int j =i;j <i+k;j++){//何処で終わるか
				int sz =A[i].first*A[j].second*A[i+k].second;
				int cost=dp[i][j]+dp[j+1][i+k]+sz;
				if(dp[i][i+k] >cost){
					dp[i][i+k]=cost;
					B[i][i+k]= j+1;//括弧を挿入する場所
				}

			}
		}
	}
	return dp[0][n-1];
}
//復元
void order(int i,int j){
	if(i==j){
		cout <<'A'<<i;
	}else{
		cout <<"(";
		order(i, B[i][j]-1);
		order(B[i][j], j);
		cout <<")";
	}
}

int main(){
	cin>>n;
	init();
	for(int i =0;i < n;i++){
		cin>>A[i].first>>A[i].second;
	}
	cout <<solve()<<endl;
	//order(0, n-1);
	return 0;
}