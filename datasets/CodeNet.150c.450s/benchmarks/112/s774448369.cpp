#include <iostream>
#include <map>
#include <string>
#include <list>
using namespace std;

int main(){
	list<string> res_list;
	while(1){
		int n;
		map<char,char> convert_map;
		cin>>n;
		if(n == 0){
			break;
		}
		for(int i = 0;i < n;i++){
			char rc ,lc;
			cin>>lc>>rc;
			convert_map.insert( map<char,char>::value_type(lc,rc) );
		}
		cin>>n;
		string res = "";
		for(int i= 0;i < n;i++){
			char c;
			cin>>c;
			auto it = convert_map.find(c);
			if(it != convert_map.end()){
				res+=it->second;
			}else{
				res+=c;
			}
		}
		res_list.push_back( res );
	}
	for(auto it = res_list.begin();it != res_list.end();it++){
		cout<<(*it)<<endl;
	}
	return 0;
}