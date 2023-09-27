#include <iostream>
#include <vector>
#include <map>
#include <string>

#define PI 3.14159265359	

using namespace std;

int main(){
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++){
		if (65 <= s[i] && s[i] <= 90) cout << (char)(s[i] + 32);
		else if (97 <= s[i] && s[i] <= 122) cout << (char)(s[i] - 32);
		else cout << s[i];
	}
	cout << endl;
}