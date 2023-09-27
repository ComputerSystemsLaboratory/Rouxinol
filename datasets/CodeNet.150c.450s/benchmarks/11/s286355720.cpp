#include <iostream>
using namespace std;
 
class card {
	public:
	bool ex;
	string rank;
	int number;
	card();
	void set(bool i, string j, int k);
	string getr(int t);
};

card::card() {
	ex = 0;
	rank = "S";
	number = 1;
}
void card::set(bool i, string j, int k) {
	ex = i;
	rank = j;
	number = k;
}

string card::getr(int t) {
	if((t-1)/13 == 0) {
		return "S";
	} else if ((t-1)/13 == 1) {
		return "H";
	} else if ((t-1)/13 == 2) {
		return "C";
	} else {
		return "D";
	}
}
 
int main() {
	card c[52];
	int n;
	cin >> n;
	for(int i=0;i<n;i++) {
		int k, l, m;
		string r;
 		cin >> r >> l;
 		if(r == "S") {
 			k =0;
 		} else if(r == "H") {
 			k = 1;
 		} else if(r == "C") {
 			k = 2;
 		} else {
 			k = 3;
 		}
 		m = k*13 + l - 1;
 		c[m].set(1, r, l);
	}
	for(int i=0;i<52;i++) {
		if(!c[i].ex) {
			if((i+1)%13 == 0) {
				cout << c[i].getr(i+1) << " " << 13 << endl;
			} else {
				cout << c[i].getr(i+1) << " " << (i+1)%13 << endl;
			}
		}
	}
	return 0;
}