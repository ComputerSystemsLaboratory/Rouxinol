#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string a,b;
	cin>>a>>b;
	a+=a;
	bool s=false;
	for(int d=0;d<a.length()/2;d++){
		for(int c=0;c<b.length();c++){
			if(a[d+c]!=b[c])break;
			if(b.length()-1==c)s=true;
			}
		}
		if(s)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
}