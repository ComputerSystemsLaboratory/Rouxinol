#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
	string s, str1, str2;
	int maxn = 0;
	map<string, int> mp;
	while(cin >> s){
		mp[s]++;
		if(mp[s] > maxn){maxn = mp[s];str1 = s;}
		if(s.size() > str2.size())str2 = s;
	}
	cout << str1 << " " << str2 << endl;
	return 0; 
}