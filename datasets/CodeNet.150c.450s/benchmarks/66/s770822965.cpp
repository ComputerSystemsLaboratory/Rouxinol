#include<string>
#include<iostream>
#include<algorithm>

#define rep(i,n) for(int i=0;i<(n);i++)

using namespace std;

int main(){
	int n; cin>>n;
	string s[256];
	rep(i,n) cin>>s[i];

	int q; cin>>q;
	bool b=true;
	while(q--){
		string t; cin>>t;
		if(count(s,s+n,t)==0) cout<<"Unknown "<<t<<endl;
		else{
			cout<<(b?"Opened by ":"Closed by ")<<t<<endl;
			b^=true;
		}
	}

	return 0;
}