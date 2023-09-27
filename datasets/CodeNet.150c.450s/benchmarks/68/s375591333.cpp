#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include <stdexcept>
#include<queue>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
typedef long long ll;
typedef pair<int,int> P;
int ceil(int a,int b){// a以上でbの倍数の最小値を出力//
    return (a+b-1)/b*b;
}
int stoii(string s){//stoi関数の代用 文字列を数値として読み取りint型に変換//
    return atoi(s.c_str());
}
int dp[110][110];
int main(){
	int n;
	while(cin>>n&&n){
		vector<int> v(n,0);
		rep(i,n) cin>>v[i];
		sort(v.begin(),v.end());
		ll min=1000000;
		rep(i,n-1){
			if(v[i+1]-v[i]<min) min=v[i+1]-v[i];
		}	
		cout<<min<<endl;
	}
}	
