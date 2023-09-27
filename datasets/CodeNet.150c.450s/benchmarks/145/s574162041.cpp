#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
	map<string,int>m;
	string s,t,u;
	int a,b=0;
	for(;cin>>s;){
		if(s.length()>u.length())u=s;
		a=++m[s];
		if(a>b){b=a;t=s;}
	}
	cout<<t<<" "<<u<<endl;
}