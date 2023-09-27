#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<set>
#define X first
#define Y second
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
typedef pair<int,int> PP;
set<string> t;
string s,d,f;
string Rev(string q){
	f="";
	for(int i=q.size()-1;i>=0;i--)
	f.push_back(q[i]);
	return f;
}

void Solve(){
	t.clear();t.insert(s);
	for(int i=1;i<s.size();i++){
		d=s.substr(i,s.size()-1)+s.substr(0,i);t.insert(d);
		d=s.substr(0,i)+Rev(s.substr(i,s.size()-i));t.insert(d);
		d=Rev(s.substr(0,i))+s.substr(i,s.size()-i);t.insert(d);
		d=Rev(s.substr(0,i))+Rev(s.substr(i,s.size()-i));t.insert(d);
		d=s.substr(i,s.size()-i)+Rev(s.substr(0,i));t.insert(d);
		d=Rev(s.substr(i,s.size()-i))+s.substr(0,i);t.insert(d);
		d=Rev(s.substr(i,s.size()-i))+Rev(s.substr(0,i));t.insert(d);
	}
}
int main(){
	int n;cin>>n;
	while(n--){
		cin>>s;Solve();
		cout<<t.size()<<endl;
	}
	return 0;
}