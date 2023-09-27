#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
	int n,m;
	while(cin>>n){
		if(n==0)break;
		map<char,char> t;
		vector<char> s;
		for(int i=0;i<n;++i){
			char c1,c2;
			cin>>c1>>c2;
			t.insert(map<char,char>::value_type(c1,c2));
		}
		cin>>m;
		for(int i=0;i<m;++i){
			char c;
			cin>>c;
			s.push_back(c);
		}
		for(vector<char>::iterator it=s.begin();it<s.end();++it){
			if(t.find(*it)!=t.end())*it=t.find(*it)->second;
			cout<<*it;
		}
		cout<<"\n";
	}
	return 0;
}