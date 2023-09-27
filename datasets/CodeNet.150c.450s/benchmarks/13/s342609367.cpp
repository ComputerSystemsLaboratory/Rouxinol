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
	string s,p;
	cin >> s >> p;
	int n = s.size();
	bool f = false;
	for(int i=0;i<s.size();i++){
		int cnt = 0;
		for(int j=0;j<p.size();j++){
			if(s[(i+j)%n] == p[j])cnt++;
		}
		if(cnt == p.size())f = true;
	}
	if(f)cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}