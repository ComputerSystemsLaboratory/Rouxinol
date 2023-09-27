#include<iostream>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	string s,ans="";
	cin>>s;
	rep(i,s.size()){
		ans+=s[s.size()-i-1];
	}
	cout<<ans<<endl;
	return 0;
}