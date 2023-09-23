//AOJ0033
/*
Sample Input
2
3 1 4 2 5 6 7 8 9 10
10 9 8 7 6 5 4 3 2 1
Output for the Sample Input
YES
NO*/
#include <bits/stdc++.h>
using namespace std;
int a[15],l[15],r[15];
bool wyh;
void dfs(int i,int j, int k){
	if(i>10){
		wyh=true;
		return;
	}
	//if(wyh)return ;
	if(a[i]>l[j-1]){
		l[j]=a[i];
		dfs(i+1,j+1,k);
	}
	if(a[i]>r[k-1]){
		r[k]=a[i];
		dfs(i+1,j,k+1);
	}
	//return false;
}
int main(){
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		for(int i=1;i<=10;i++){
			cin>>a[i];
		}
		wyh=false;
		dfs(1,1,1);
		if(wyh)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
