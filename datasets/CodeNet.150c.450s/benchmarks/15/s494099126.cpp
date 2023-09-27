#include<iostream>
using namespace std;
int main(){
	int n,S[10000],q,T[500],ans=0;
	cin>>n;
	for(int i=0;i<n;i++)cin>>S[i];
	cin>>q;
	for(int i=0;i<q;i++)cin>>T[i];
	for(int i=0;i<q;i++){
		for(int i2=0;i2<n;i2++){
			if(S[i2]==T[i]){
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
}