#include <iostream>
#include <set>
using namespace std;
int main(void){
	int n,m;
	cin>>n;
	set<string> uids;
	for(int i=0;i<n;++i){
		string s;
		cin>>s;
		uids.insert(s);
	}
	bool locked=true;
	cin>>m;
	for(int i=0;i<m;++i){
		string s;
		cin>>s;
		if(uids.find(s)!=uids.end()){
			cout<<((locked)?"Opened by ":"Closed by ")<<s<<endl;
			locked=!locked;
		}
		else cout<<"Unknown "<<s<<endl;
	}
	
	return 0;
}