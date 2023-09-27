#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ac = 0, wa = 0, tle = 0, re = 0;
    while(n--){
		string s;
		cin >> s;
		if(s == "AC"){
			ac++;
			} else if (s == "WA"){
				wa++;
				} else if(s == "TLE"){
					tle++;
					} else if (s == "RE"){
						re++;
						}
		}
	cout << "AC x " << ac << endl << "WA x " << wa << endl << "TLE x " << tle << endl << "RE x " << re << endl;
	

}
