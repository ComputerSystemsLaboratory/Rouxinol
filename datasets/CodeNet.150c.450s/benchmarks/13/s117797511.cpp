#include <iostream>
using namespace std;

int main(){
	string s, p;
	cin >> s >> p;
	s += s;
	for(int i = 0; i < s.size(); i++) if(s[i] == p[0]){
		bool f = true;
		for(int j = 0; j < p.size(); j++){
			if(s.size() <= i + j){
				f = false;
				break;
			}
			f &= s[i + j] == p[j];
		}
		if(f){
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}