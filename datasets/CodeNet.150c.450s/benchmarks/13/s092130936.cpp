#include <iostream>
#include <string>
using namespace std;

int main(){

	string s, p;
	cin >> s >> p;
	int frag = 0;

	s += s;

	int sLen = s.length();
	int pLen = p.length();

	for(int i = 0; i < sLen - pLen; i++){
		if(s.substr(i, pLen) == p){
			frag = 1;
			break;
		}
	}

	if(frag){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

	return 0;
}