#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int a[10];
bool ans;
void dfs(int i,int r,int l){
	if(i==10){
		ans=1;
		return;
	}
	if(a[i]<r&&a[i]<l)return;
	if(ans)return;
	if(r<a[i])dfs(i+1,a[i],l);
	if(l<a[i])dfs(i+1,r,a[i]);

}
int main(){
	int t;
	cin>>t;
	while(t--){
		ans=0;
		for(int i=0;i<10;i++)cin>>a[i];
		dfs(0,0,0);
		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}