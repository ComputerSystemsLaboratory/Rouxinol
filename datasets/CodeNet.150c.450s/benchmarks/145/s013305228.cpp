#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
	string s;
	string longest = "";
	int most = 0;
	string most_str;
	map<string, int> h;
	while(cin >> s){
		if(s.size() > longest.size()){
			longest = s;
		}
		if (h.find(s) == h.end()) {
			h[s] = 0;
		}
		h[s]++;
		if (most < h[s]) {
			most = h[s];
			most_str = s;
		}
	}
	cout << most_str << " " << longest << endl;
	return 0;
}