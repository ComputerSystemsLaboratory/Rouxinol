#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin >> N;
	int a = 0, w = 0, t = 0, r = 0;
	string x;	
	for(int i=1; i <= N; ++i){
		cin >> x;
		if (x[0] == 'A'){
			a++;
		}
		else if (x[0] == 'T'){
			t++;
		}
		else if (x[0] == 'W'){
			w++;
		}
		else{
			r++;
		}
	}
	cout << "AC x " << a << endl;
	cout << "WA x " << w << endl;
	cout << "TLE x " << t << endl;
	cout << "RE x " << r << endl;	
}
