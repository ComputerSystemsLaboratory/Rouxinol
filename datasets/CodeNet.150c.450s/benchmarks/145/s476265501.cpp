#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	string s,t,u;
	int M=0,l=0;
	map<string,int>m;
	for(;cin>>u;){
		if(++m[u]>M)M=m[u],s=u;
		if(t.size()<u.size())t=u;
	}
	cout<<s<<' '<<t<<endl;
}