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
pii A[200];//firstは行secondを列とする
int dp[200][200];//dp[i][j]:=Ai...Ajの最小スカラー積とする
int n;
int f[200][200];//最適な括弧を挿入する位置
void solve(){
	for(int i =0;i < n;i++){
		for(int j =0;j < n;j++){
			if(i==j)dp[i][j]=0;
			else dp[i][j]=INF;
		}
	}
	
	for(int k =1;k <n;k++){//鎖の数
		for(int i =0;i <n-k;i++){//どこから始めるか
			for(int j =i;j <i+k;j++){//どこに括弧を挟むか
				int tmp =A[i].first*A[j].second*A[i+k].second;
				if(dp[i][i+k] >dp[i][j]+dp[j+1][i+k]+tmp){
					dp[i][i+k]=dp[i][j]+dp[j+1][i+k]+tmp;
					f[i][i+k] =j;
				}
			}
		}
	}
}

void print(int i,int j){//解を表示する
	if(i==j){
		cout <<"A"<<i;
	}else{
		cout <<"(";
		print(i,f[i][j]);
		print(f[i][j]+1,j);
		cout <<")";
	}
}


int main(){
	cin>>n;
	for(int i =0;i < n;i++){
		cin>>A[i].first>>A[i].second;
	}
	solve();
	cout <<dp[0][n-1]<<endl;
	//print(0,n-1);
	return 0;
}