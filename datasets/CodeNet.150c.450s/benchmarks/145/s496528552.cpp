#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(void){
	string str;
	int mt=0,ml=0;
	string ms,mst;
	map<string,int> m;

	while(cin>>str){
		if(str.length()>ml){
			ml=str.length();
			ms=str;
		}
		m[str]++;
	}
	for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
		if(it->second>mt){
			mt=it->second;
			mst=it->first;
		}
	}
	cout<<mst<<" "<<ms<<endl;

}