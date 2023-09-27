#include <iostream>
using namespace std;

int main(){
	string s;
	while(cin >> s && s != "-"){
		int m;
		cin >> m;
		while(m--){
			int h;
			cin >> h;
			string t;
			for(int i = h; i < s.size(); i++) t += s[i];
			for(int i = 0; i < h; i++) t += s[i];
			s = t;
		}
		cout << s << endl;
	}
}