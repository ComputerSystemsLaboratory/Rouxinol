#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >>T ;
	while(T--){
		int s[3];
		cin >> s[0] >> s[1] >> s[2];
		sort(s,s+3);
		if( s[0] * s[0] + s[1] * s[1] == s[2] * s[2] ) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}