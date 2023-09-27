#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
using namespace std;

vector<int> split(string s,char c){
	vector<int> v;string tmp;
	for(int i=0;i<s.size();i++){
		if(s[i]==c){
			v.push_back(stoi(tmp));
			tmp ="";
		}
		else tmp += s[i];
	}
	if(tmp!="")v.push_back(stoi(tmp));
	return v;
}

int sum(string s){
	int ret=0;
	for(int i=0;i<s.size();i++){
		ret += stoi(s.substr(i,1));
	}
	return ret;
}

int main(void){
	for(int i=0;;i++){
		string x;
		cin >> x;
		if(x=="0")return 0;
		cout << sum(x) << endl;
	}

	return 0;
}