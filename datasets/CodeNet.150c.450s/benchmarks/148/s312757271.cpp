#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
using namespace std;
typedef long long ll;

int main(){
	int n; cin>>n;
	int ac=0,tle=0,wa=0,re=0;
	rep(i,n){
		char c[4]={}; cin>>c;
		if(c[0]=='A') ac++;
		else if(c[0]=='W') wa++;
		else if(c[0]=='T') tle++;
		else re++;
	}
	cout<<"AC x "<<ac<<endl;
	cout<<"WA x "<<wa<<endl;
	cout<<"TLE x "<<tle<<endl;
	cout<<"RE x "<<re<<endl;

}