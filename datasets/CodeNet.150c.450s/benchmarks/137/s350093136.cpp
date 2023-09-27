#include <iostream>
#include <string>

#include <set>
using namespace std;

int main(void){
	string str;
	int n;
	set<string> s;
	cin>>n;
	while(n--){
		cin>>str;
		if(str=="insert"){
			cin>>str;
			s.insert(str);
		}else{
			cin>>str;
			set<string>::iterator it;
			it=s.find(str);
			if(it==s.end()) cout<<"no"<<endl;
			else cout<<"yes"<<endl;
		}
	}
	return 0;
}