#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	getline(cin, s);
	for(int i = 0 ; s[ i ] ; i++)
		if(s[ i ] >= 65 && s[ i ] <= 90)
			s[ i ] += 32;
		else if(s[ i ] >= 97 && s[ i ] <= 122)
			s[ i ] -= 32;
	cout << s << endl;
	return 0;
}
