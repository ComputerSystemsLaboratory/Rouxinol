#include <bits/stdc++.h>
using namespace std;

int main(void){
	string W;
	cin >> W;
	string s;
	int ans = 0;
	while(s != "END_OF_TEXT"){
	transform(s.begin(), s.end(), s.begin(), ::tolower);
		if(s == W)ans++;
		cin >> s;
	}
	cout << ans << endl;
}
