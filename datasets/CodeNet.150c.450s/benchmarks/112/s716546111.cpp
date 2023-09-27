#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int m;
	char before, after;
	char ch;
	while(cin >> n){
		if(n == 0) break;
		map<char , char> mp;
		vector<char> vc;
		for(int i = 0; i < n; i++){
			cin >> before >> after;
			mp[before] = after;
			vc.push_back(before);
		}
		cin >> m;
		for(int i = 0; i < m; i++){
			cin >> ch;
			bool f = true;
			for(vector<char>::const_iterator iter = vc.begin();
				iter != vc.end(); iter++)
			{
				if(*iter == ch){
					cout << mp[ch];
					f = false;
					break;
				}
			}
			if(f) cout << ch;
		}
		cout << endl;
	}
	return 0;
}