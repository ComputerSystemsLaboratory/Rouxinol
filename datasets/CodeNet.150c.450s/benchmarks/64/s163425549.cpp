#include<bits/stdc++.h>
#define loop(i,a,b) for(i=a;i<b;i++)
#define rloop(i,a,b) for(j=a;j>=b;j--)
#define vi vector<int>
using namespace std;

int main(){
	int n,i,j;
	cin>>n;
	vi a(n);
	loop(i,0,n){
		cin>>a[i];
	}
	vector<bool> dp(40001,false);
	dp[0]=true;
	loop(i,0,n){
		rloop(j,40001,0){
			if(dp[j]==true){
				dp[j+a[i]]=true;
			}
		}
	}
	int q;
	cin>>q;
	loop(i,0,q){
		cin>>j;
		if(dp[j]==true){
			cout<<"yes"<<"\n";
		}else{
			cout<<"no"<<"\n";
		}
	}
}