#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	int n;
	while (cin >> n){
		if (n == 0)break;
		vector<pair<char, char> >l;
		string s;
		for (int i = 0; i < n; i++){
			pair<char, char>c;
			cin >> c.first >> c.second;
			l.push_back(c);
		}
		cin >> n;
		for (int i = 0; i < n; i++){
			char c; cin >> c;
			for (int i = 0; i < l.size(); i++){
				if (c==l[i].first){
					c = l[i].second;
					goto h;
				}
			}
		h:
			s += c;
		}
		cout << s << endl;
	}
}