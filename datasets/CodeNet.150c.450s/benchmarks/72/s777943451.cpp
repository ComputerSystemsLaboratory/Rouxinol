#include<iostream>
#include<vector>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<cctype>
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

int main(void){
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(isupper(s[i]))
			printf("%c",tolower(s[i]));
		else
			printf("%c",toupper(s[i]));
	}
	cout << endl;
	return 0;
}