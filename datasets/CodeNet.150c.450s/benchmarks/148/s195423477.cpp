#include <iostream>
#include <string>
using namespace std;
int main(){
	int n,a=0,w=0,t=0,r=0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "AC")
			a++;
		else if (s == "WA")
			w++;
		else if (s == "TLE")t++;
		else r++;
	}
	cout << "AC x " << a<<endl;
	cout << "WA x " << w << endl;
	cout << "TLE x " << t << endl;
	cout << "RE x " << r << endl;
}