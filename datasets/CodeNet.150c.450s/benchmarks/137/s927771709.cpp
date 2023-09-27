#include <iostream>
#include <map>
#include <cstring>
using namespace std;
map <string,bool> dict;
int main() {
	int n;
	cin >> n;
	for (int i=0;i<n;i++) {
		string a,b;
		cin >> a >> b;
		if (a=="insert") dict[b]=true;
		else {
			if (dict.find(b)!=dict.end()) cout << "yes\n";
			else cout << "no\n";
		}
	}
	return 0;
}
