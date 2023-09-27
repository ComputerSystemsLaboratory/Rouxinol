#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<queue>
#include<map>
#include<stack>
#include<set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int MAX_N=100000;
const int INF = 0x3f3f3f3f;

int dp[1010][1010];
int main(){
	ios::sync_with_stdio(false);
	int t;
	string a,b;
	cin>>t;
	while(t--){
		memset(dp,0,sizeof(dp));
		cin>>a>>b;
		int lena=a.length();
		int lenb=b.length();
		for(int i=1;i<=lena;i++){
			for(int j=1;j<=lenb;j++){
				if(a[i-1]==b[j-1]){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		cout<<dp[lena][lenb]<<endl;
	}


	return 0;
}


