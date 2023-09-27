#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
	multiset<string> se;
	string str,str2;
	while(cin>>str){
		se.insert(str);
	}

	int cnt=0,cnt2=0;
	for(auto it=se.begin();it!=se.end();it++){
		int tmp=se.count(*it);
		if(tmp>cnt){
			cnt=tmp;
			str=(*it);
		}
		int tmp2=(int)(*it).length();
		if(tmp2>cnt2){
			cnt2=tmp2;
			str2=(*it);
		}
	}
	cout<<str<<" "<<str2<<endl;
	return 0;
}