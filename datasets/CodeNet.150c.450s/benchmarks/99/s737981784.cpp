#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int tonum(string s1) {
	int n1 = 0, p = 1;
	for (int i=0; i<(int)s1.size(); i++) {
		if ('2' <= s1[i] && s1[i]<= '9') p = s1[i] - '0';
		else if (s1[i] == 'm') {
			n1 += p * 1000;
			p = 1;
		} else if (s1[i] == 'c') {
			n1 += p * 100;
			p = 1;
		} else if (s1[i] == 'x') {
			n1 += p * 10;
			p = 1;
		} else if (s1[i] == 'i') {
			n1 += p;
			p = 1;
		}
	}
	return n1;
}

string tomcxi(int sum) {
	stringstream res;
	
	if (sum/1000 > 0) {
		if (sum/1000 != 1) res << sum/1000;
		res << "m";
	}
	sum %= 1000;
	if (sum/100 > 0) {
		if (sum/100 != 1) res << sum/100;
		res << "c";
	}
	sum %= 100;
	if (sum/10 > 0) {
		if (sum/10 != 1) res << sum/10;
		res << "x";
	}
	sum %= 10;
	if (sum > 0) {
		if (sum!=1) res << sum;
		res << "i";
	}
	return res.str();
}

int main() {
	int n; cin >> n;
	
	for (int rep = 0; rep < n; rep++) {
		
		string s1, s2; cin >> s1 >> s2;
		
		int n1 = tonum(s1), n2 = tonum(s2);
		
		int sum = n1 + n2;
		cout << tomcxi(sum) << endl;
	}
	
	return 0;
}