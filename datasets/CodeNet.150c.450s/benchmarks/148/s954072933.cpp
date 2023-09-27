#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;cin >>n;
	int cnt_ac = 0;
	int cnt_wa = 0;
	int cnt_tle = 0;
	int cnt_re = 0;
	for (int i=0;i<n;++i){
		string s;cin >> s;
		if(s=="AC") {
			++cnt_ac;
		} else if(s=="WA") {
			++cnt_wa;
		} else if(s=="TLE") {
			++cnt_tle;
		} else if(s=="RE") {
			++cnt_re;
		}
	}
	cout << "AC x "<< cnt_ac << endl;
	cout << "WA x "<< cnt_wa << endl;
	cout << "TLE x "<< cnt_tle << endl;
	cout << "RE x "<< cnt_re << endl;
	return 0;
}