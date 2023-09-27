#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)

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
int n;
int d[300];

int main(){
	while(cin>>n){
		rep(i,n){
			cin>>d[i];
		}
		int p = 0;
		unsigned long long int dp[100][22]={0};//dp[i][j]
		dp[0][d[0]] = 1;
		for(int i = 1;i < n-1;i++){
			for(int j = 0;j <=20;j++){
				if(dp[i-1][j]>0){
					if(j+d[i] <=20){
						dp[i][j+d[i]] +=dp[i-1][j];
					}
					if(j-d[i]>=0)
						dp[i][j-d[i]] +=dp[i-1][j];
				}
			}
		}
		cout <<dp[n-2][d[n-1]]<<endl;
	}
	return 0;
}