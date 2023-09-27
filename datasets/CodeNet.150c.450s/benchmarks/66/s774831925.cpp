#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
#include<map>
using namespace std;

int main(){
	set<string> user;
	bool open=false;
	string name;
	int n,m;
	cin>>n;
	while(n--){
		cin>>name;
		user.insert(name);
	}
	cin>>m;
	while(m--){
		cin>>name;
		if(user.find(name)!=user.end()){
			if(open)cout<<"Closed by ";
			else cout<<"Opened by ";
			cout<<name<<endl;
			open=!open;
		}else{
			cout<<"Unknown "<<name<<endl;
		}
	}
	return 0;
}