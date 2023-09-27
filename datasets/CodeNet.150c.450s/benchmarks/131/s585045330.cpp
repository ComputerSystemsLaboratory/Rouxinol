#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <algorithm>
#include <sstream>
#include <cstdlib>

using namespace std;

string itos(int x, int l){
	stringstream ss;
	ss << x;
	string s = ss.str();
	return string(l - s.size(), '0') + s;
}

int main(){
	while(true){
		int x, l;
		cin >> x >> l;
		if(x == 0 && l == 0){ break; }
		map<int, int> mp;
		int answer = 0;
		while(mp.find(x) == mp.end()){
			mp.insert(make_pair(x, answer));
			string s = itos(x, l);
			sort(s.begin(), s.end());
			int small = atoi(s.c_str());
			reverse(s.begin(), s.end());
			int large = atoi(s.c_str());
			x = large - small;
			++answer;
		}
		cout << mp[x] << " " << x << " " << answer - mp[x] << endl;
	}
	return 0;
}