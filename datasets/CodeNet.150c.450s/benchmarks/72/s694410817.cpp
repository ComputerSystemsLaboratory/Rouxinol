#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	string s, ans;
	ans = string();
	getline(cin, s);
	int l = s.length();
	for (int i = 0; i < l; ++i){
		char ch = s[i];
		if (islower(ch)) ans += toupper(ch);
		else if (isupper(ch)) ans += tolower(ch);
		else ans += ch;
	}
	cout << ans << endl;
	return 0;
}