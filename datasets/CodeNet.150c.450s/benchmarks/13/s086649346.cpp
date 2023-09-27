#include <iostream>
using namespace std;

int main(){
	string s, p;
	cin >> s;
	cin >> p;
	int n = s.length();
	int l = p.length();
	bool f = true;
	for(int i = 0; i < n; ++i){
		f = true;
		for(int j = 0; j < l; ++j){
			if(s[(i + j) % n] != p[j]){
				f = false;
				break;
			}
		}
		if(f){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}