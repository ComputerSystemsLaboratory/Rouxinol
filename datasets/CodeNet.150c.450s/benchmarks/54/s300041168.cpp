#include <iostream>
using namespace std;

int main(){
	int ans = 0;
	string w, s;
	cin >> w;
	for(char &c:w) if('A' <= c && c <= 'Z') c = 'a' + c - 'A';
	while(cin >> s && s != "END_OF_TEXT"){
		for(char &c:s) if('A' <= c && c <= 'Z') c = 'a' + c - 'A';
		if(s == w) ans++;
	}
	cout << ans << endl;
}