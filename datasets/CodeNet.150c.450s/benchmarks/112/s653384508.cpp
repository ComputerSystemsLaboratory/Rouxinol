#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main(){	
	int n;
	while (cin >> n, n){
		map<char, char> mp;
		while (n--){
			char c, d;
			cin >> c >> d;
			mp[c] = d;
		}
		int m;
		cin >> m;
		while (m--){
			char c;
			cin >> c;
			if (mp.count(c)){
				cout << mp[c];
			}
			else{
				cout << c;
			}
		}
		cout << endl;
	}

	return 0;
}