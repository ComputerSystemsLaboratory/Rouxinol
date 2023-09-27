#include<iostream>
using namespace std;
int n;
int main(){
	while(cin>>n){
		if(n==0)break;
		int s[110]={},ma=0,mi=1001,cn=0;
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]>ma){
				ma=s[i];
			}
			if(s[i]<mi){
				mi=s[i];
			}
			cn+=s[i];
		}
		cout<<((cn-mi)-ma)/(n-2)<<endl;
	}
	return 0;
}