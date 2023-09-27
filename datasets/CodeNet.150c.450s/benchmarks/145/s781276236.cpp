#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

bool great(const pair<string, int>& left, const pair<string, int>& right){
	return left.second > right.second;
}

int main(){
	string max = "";
	string s;
	map<string, int> m;
	vector<pair<string, int> >v;
	while (cin >> s){
		if (max.size() < s.size()) max = s;
		if (m.find(s) == m.end()) m[s] = 1;
		else m[s]++;
	}
	map<string, int>::iterator it = m.begin();
	while (it != m.end()){
		v.push_back(make_pair((*it).first, (*it).second));
		it++;
	}
	sort(v.begin(),v.end(),great);
	cout << v[0].first << " " << max << endl;
}