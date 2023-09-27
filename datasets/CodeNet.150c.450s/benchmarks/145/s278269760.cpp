#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
#include<sstream>

using namespace std;

string str;

int main(void){
	string word;
	
	map<string,int> h;
	vector<string> v;
	
	getline(cin, str);
	stringstream ss;
	ss << str;
	while(ss >> word){
		h[word]++;
		v.push_back(word);
	}
	int mh = 0, ml = 0;
	int hi = 0, li = 0;
	for(int i = 0; i < v.size(); i++){
//		cout << h[v[i]] << endl;
		if(h[v[i]] > mh){
			mh = h[v[i]];
			hi = i;
		}
		if(v[i].size() > ml){
			ml = v[i].size();
			li = i;
		}
	}
	
	cout << v[hi] << " " << v[li] << endl;
	
	return 0;
}