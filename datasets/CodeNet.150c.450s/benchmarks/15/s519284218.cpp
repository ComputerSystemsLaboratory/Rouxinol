#include<iostream>
using namespace std;
int t[100000];
int main(){
	int n,q,ans=0;;

	cin>>n;
	for(int i=0;i<n;i++)cin>>t[i];
	cin>>q;
	int tmp;
	bool x;
	for(int i=0;i<q;i++){
		cin>>tmp;
		x=0;
		for(int j=0;j<n;j++)if(t[j]==tmp)x=1;
		ans+=x;
	}
	cout<<ans<<endl;
	return 0;
}