#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n, c;
	string key[] = {"", ".,!? ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	string input;
	char p;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		c = 0;
		p = '0';
		for (int j = 0; j < input.size(); j++) {
			if (input[j] == '0' && p != '0') {
				cout << key[p - '0'][(c - 1) % key[p - '0'].size()];
				c = 0;
			} else if (input[j] == p) {
				c++;
			} else {
				c = 1;
			}
			p = input[j];
		}
		cout << endl;
	}
	
	return 0;
}