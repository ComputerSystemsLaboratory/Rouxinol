#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main(){
	string s;
	map<string, int> counter;
	string maxnum;
	string maxlen;
	while(cin >> s){
		int c = ++counter[s];
		if(c > counter[maxnum]){ maxnum = s; }
		if(s.size() > maxlen.size()){ maxlen = s; }
	}
	cout << maxnum << " " << maxlen << endl;
	return 0;
}