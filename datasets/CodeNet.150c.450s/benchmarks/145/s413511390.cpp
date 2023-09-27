#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int main(){
string n,t;
int ms=0;
map<string,int>ta;
	while(cin>>n){
	ta[n]++;
	if( ms<n.size() )ms=n.size(),t=n;
	}
	string a;
	ms=0;
	for(map<string,int>::iterator it=ta.begin();it!=ta.end();it++){
		if(ms<(*it).second)ms=(*it).second,a=(*it).first;
	}
	
	cout<<a<<" "<<t<<endl;

	return 0;
}