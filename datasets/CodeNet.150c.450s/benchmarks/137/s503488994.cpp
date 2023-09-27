#define _CRT_SECURE_NO_WARNINGS
#include <map>
#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	map<string,int> mp;
	int n,j=0;
	string s;
	char c[20];
	cin >> n;
	for (int i = 0;i < n;i++) {
		scanf("%s", c);
		if (c[0] == 'i') {
			cin >> s;
			mp.insert(make_pair(s, j));
			j++;
		}
		else {
		  cin >> s;
		  cout << ((mp.find(s) != mp.end()) ? "yes" : "no") << endl;
		}
	}
}