#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string S,T;
int x[10000],y[10000];
int dp[10000][10000];
char U[53]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int MAXN;

int main(){
	int q;
	cin>>q;
	for(int i=0;i<q;i++){
		MAXN=0;
		cin>>S>>T;
		for(int i=0;i<S.size();i++){
			for(int j=0;j<52;j++){
				if(S[i]==U[j]){
					x[i+1]=j;
				}
			}
		}
		for(int i=0;i<T.size();i++){
			for(int j=0;j<52;j++){
				if(T[i]==U[j]){
					y[i+1]=j;
				}
			}
		}
		for(int i=0;i<=T.size();i++){
			for(int j=0;j<=S.size();j++){
				if(i==0 || j==0){
					dp[i][j]=0;
				}
				else if(x[j]==y[i]){
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else{
					dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
				}
			}
		}
		for(int i=0;i<=T.size();i++){
			for(int j=0;j<=S.size();j++){
				MAXN=max(MAXN,dp[i][j]);
			}
		}
		cout<<MAXN<<endl;
	}
	return 0;
}