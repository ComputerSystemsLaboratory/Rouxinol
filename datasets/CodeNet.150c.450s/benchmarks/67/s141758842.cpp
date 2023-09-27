#include<iostream>
using namespace std;
int d[200001]={};
int main(){
	int n,ans=0;
	while(cin>>n,n){
		for(int i=1;i<=n;i++){
			d[i]=d[i-1]+i;
		}
		ans=0;
		int l=0,r=1;
		while(r!=n || d[r]-d[l]<n){
			if(d[r]-d[l]==n)
			ans++;
			if(d[r]-d[l]<n)
			r++;
			else
			l++;
		}
		cout<<ans<<endl;
	}
	return 0;
}