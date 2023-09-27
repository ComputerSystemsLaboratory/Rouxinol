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

int total[26];
int main(void){
	string s;
	while(cin >> s){
	for(int i=0;i<s.size();i++){
		if(isalpha(s[i]))
			total[tolower(s[i]) - 'a']++;
	}
	}
	for(int i=0;i<26;i++){
		printf("%c : %d\n",'a'+i,total[i]);
	}
	return 0;
}