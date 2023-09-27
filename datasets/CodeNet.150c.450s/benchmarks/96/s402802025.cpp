#include<iostream>
#include<string>
using namespace std;
int main() {
	int n; cin >> n;
	for (int j = 0; j < n; j++){
		string s; cin >> s;
		char c;
		int num = 0;
		for (int i = 0; i != s.size(); i++){
			if (i == 0 || s[i - 1] == '0') {
				if (s[i] == '0')goto cont;
				else {
					c = s[i]; 
					num++;
				}
			}
			else{
				if (s[i] == '0') {
					if (c == '1') {
						num = num % 5;
						if (num == 1)cout << '.';
						else if (num == 2)cout << ',';
						else if (num == 3)cout << '!';
						else if (num == 4)cout << '?';
						else cout << ' ';
					}
					else if (c == '2') {
						num = num % 3;
						if (num == 1)cout << 'a';
						else if (num == 2)cout << 'b';
						else cout << 'c';
					}
					else if (c == '3') {
						num = num % 3;
						if (num == 1)cout << 'd';
						else if (num == 2)cout << 'e';
						else cout << 'f';
					}
					else if (c == '4') {
						num = num % 3;
						if (num == 1)cout << 'g';
						else if (num == 2)cout << 'h';
						else cout << 'i';
					}
					else if (c == '5') {
						num = num % 3;
						if (num == 1)cout << 'j';
						else if (num == 2)cout << 'k';
						else cout << 'l';
					}
					else if (c == '6') {
						num = num % 3;
						if (num == 1)cout << 'm';
						else if (num == 2)cout << 'n';
						else cout << 'o';
					}
					else if (c == '7') {
						num = num % 4;
						if (num == 1)cout << 'p';
						else if (num == 2)cout << 'q';
						else if (num == 3)cout << 'r';
						else cout << 's';
					}
					else if (c == '8') {
						num = num % 3;
						if (num == 1)cout << 't';
						else if (num == 2)cout << 'u';
						else cout << 'v';
					}
					else if (c == '9') {
						num = num % 4;
						if (num == 1)cout << 'w';
						else if (num == 2)cout << 'x';
						else if (num == 3)cout << 'y';
						else cout << 'z';
					}
					num = 0;
				}
				else num++;
			}
		cont:;
		}
		cout << endl;
	}
}