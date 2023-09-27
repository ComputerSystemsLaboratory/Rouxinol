#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s;
	while (cin >> s,(s.length() > 1 || s[0]!= '0')){
		int sum = 0;
		for (int i = 0; i < s.length(); i++){
			sum += s[i] - '0';
		}
		cout << sum << endl;
	}

	return 0;
}