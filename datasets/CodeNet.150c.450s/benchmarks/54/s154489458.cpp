#include <iostream>
#include <string>
#include <algorithm>

#define EOS "END_OF_TEXT"

using namespace std;

int main() {
	int cnt = 0;
	string target;
	string s;
	
	cin >> target;
	cin >> s;

	transform(target.begin(), target.end(), target.begin(), ::tolower);

	while(s != EOS) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		
		if(s == target) 
			cnt++;

		cin >> s;
	}

	cout << cnt << endl;

	return 0;
}