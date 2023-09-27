#include<iostream>
#include<algorithm>
using namespace std;
int a[100000],n,k,s,ans;
int main(){
	while(true){
	cin>>n>>k;
	if(!n&&!k)break;
	s=0,ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i<k)s+=a[i];
	}
	ans=s;
	for(int i=k;i<n;i++)s+=a[i]-a[i-k],ans=max(s,ans);
	cout<<ans<<endl;
	}
	return 0;
}