#include <iostream>
#include <string>

using namespace std;

unsigned char dict[30517579];

unsigned int mhash(string str) {
	unsigned int res = 0;
	for(char e:str) {
		res = res * 5;
		switch(e) {
			case 'A':
				res += 1;
				break;
			case 'C':
				res += 2;
				break;
			case 'G':
				res += 3;
				break;
			case 'T':
				res += 4;
				break;
		}
	}
	return res;
}

int main(void) {
	int n;
	string cmd,prm;
	cin >> n;
	for(int i = 0;i < n;i++) {
		cin >> cmd >> prm;
		unsigned int hs = mhash(prm);
		if(cmd == "insert") {
			dict[hs/8] = dict[hs/8] | (1<<(hs%8));
		} else {
			if(dict[hs/8] & (1 << (hs%8))) cout << "yes";
			else cout << "no";
			cout << endl;
		}
	}
}

