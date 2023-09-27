#include<bits/stdc++.h>
using namespace std;
 
int main(){
int a;
while(cin>>a,a){
	map<string,string>s;
	for(int b=0;b<a;b++){
	string c,k;
	cin>>c>>k;
	s.insert(pair<string,string>(c,k));
	}
	int d;
	cin>>d;
	string r="";
	for(int e=0;e<d;e++){
	string t;
	cin>>t;
	if(s[t].empty()==true)s[t]=t;;
	r+=s[t];
	}
	cout<<r<<endl;
	}
}