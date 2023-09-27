//Equal Total Scores

#include<iostream>
using namespace std;

#define MAX_N 100
#define MAX_M 100

void solve(int n,int m){
	int s[MAX_N],t[MAX_M],ss=0,st=0;
	for(int i=0;i<n;++i){
		cin>>s[i];
		ss+=s[i];
	}
	for(int j=0;j<m;++j){
		cin>>t[j];
		st+=t[j];
	}
	for(int i=0;i<n;++i) for(int j=0;j<m;++j){
		if(ss-s[i]+t[j]==st-t[j]+s[i]){
			cout<<s[i]<<" "<<t[j]<<endl;
			return;
		}
	}
	cout<<-1<<endl;
	return;
}

int main(){
	while(true){
		int n,m;
		cin>>n>>m;
		if(n!=0) solve(n,m);
		else break;
	}
}