#include<iostream>
#include<string>
#include<sstream>
#include<cstdlib>
#include<map>

using namespace std;

int main(){
	while(1){
		string str;
		getline(cin,str);
		int n = atoi(str.c_str());
		if(n==0)break;
		map<char,char> dict;
		while(n--){
			getline(cin,str);
			stringstream ss(str);
			string tmp;
			getline(ss,tmp,' ');
			char a = tmp[0];
			getline(ss,tmp);
			char b = tmp[0];
			dict[a]=b;
		}
		getline(cin,str);
		n = atoi(str.c_str());
		stringstream ss;
		while(n--){
			getline(cin,str);
			map<char,char>::iterator it;
			if((it = dict.find(str[0])) != dict.end()){
				ss<<dict[str[0]];
			}
			else ss<<str[0];
		}
		cout<<ss.str()<<endl;
	}
	return 0;
}