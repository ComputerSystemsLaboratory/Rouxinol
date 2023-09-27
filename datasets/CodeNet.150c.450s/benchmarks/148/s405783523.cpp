#include <iostream>
using namespace std;
#define ll  long long
#define M 1000000007
#define tc int t; cin>>t; while(t--)
#include <cstring>
#include <cmath>

int main(){
	int n;
	cin>>n;
	int ac = 0, wa = 0, tle = 0, re = 0;
	for(int i = 0; i < n; i++){
		string s;
		cin>>s;
		if(s[0] == 'A'){
			ac++;
		}
		else if(s[0] == 'W'){
			wa++;
		}
		else if(s[0] == 'T'){
			tle++;
		}
		else{
			re++;
		}
	}
	cout << "AC" << " x " << ac << endl;
	cout << "WA" << " x " << wa << endl;
	cout << "TLE" << " x " << tle << endl;
	cout << "RE" << " x " << re << endl;
	return 0;
}