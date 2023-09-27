#include<iostream>
#include<string>
using namespace std;

const int MAX_N=1e3+5;

string s1,s2;

int dp[MAX_N][MAX_N];


int lcs(int i,int j){
	if(i==s1.size() || j==s2.size())return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	if(s1[i]==s2[j])return dp[i][j]=lcs(i+1,j+1)+1;
	return dp[i][j]=max(lcs(i+1,j),lcs(i,j+1));
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		s1.clear();s2.clear();
		for(int j=0;j<MAX_N;j++)fill(dp[j],dp[j]+MAX_N,-1);
		cin>>s1>>s2;
		cout<<lcs(0,0)<<endl;
	}
}