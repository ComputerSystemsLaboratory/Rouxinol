#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string check(int num);

int main(){
	int ans = 0;
	string s,p;
	cin >> s;
	
	while(cin >> p){
		if(p == "END_OF_TEXT")break;
		if(s.size() != p.size())continue;
		transform(p.begin(), p.end(), p.begin(), ::tolower);
		if(s==p)ans++;
	}
	cout << ans << "\n";
	
	return 0;
}