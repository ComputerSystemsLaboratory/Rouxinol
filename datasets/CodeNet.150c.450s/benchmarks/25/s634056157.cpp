#include <iostream>
#include <vector>
#include <map>
#include <string>

#define PI 3.14159265359	

using namespace std;

int main(){
	string s;
	map<char, int> mp;
	while (cin >> s){
		for (int i = 0; i < s.size(); i++){
			if (65 <= s[i] && s[i] <= 90) mp[s[i] + 32]++;
			else mp[s[i]]++;
		}
	}
	for (int i = 97; i <= 122; i++){
		cout << (char)i << " : " << mp[(char)i] << endl;;
	}
}