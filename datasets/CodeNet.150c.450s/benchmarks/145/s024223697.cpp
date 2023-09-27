#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
	string s, key="", max="";
	map<string, int> count;
	int ans_int=0;
	while(cin >> s){
		if(s.size() > max.size()) max = s;
		++count[s];
	}
	for(map<string,int>::iterator it = count.begin(); it != count.end(); it++){
		if(ans_int < it->second){
		ans_int = it->second;
		key = it -> first;
		}
	}
			cout << key << " " << max << endl;
}