#include <iostream>
#include <set>
using namespace std;
#define rall(p) p.rbegin(),p.rend()
string train;
set<string> s;
void solve(){
	s.clear();
	s.insert(train);
	for(int i=1;i<train.size();i++){
		string s1=train.substr(0,i);
		string s2=train.substr(i);
		string s1r=string(rall(s1));
		string s2r=string(rall(s2));
		s.insert(s1+s2r);
		s.insert(s2r+s1);
		s.insert(s1r+s2r);
		s.insert(s2+s1);
		s.insert(s2+s1r);
		s.insert(s1r+s2);
		s.insert(s2r+s1r);
	}
	cout<<s.size()<<endl;
}
int main(){
	int m;
	cin>>m;
	for(;m>0;m--){
		cin>>train;
		solve();
	}
	return 0;
}