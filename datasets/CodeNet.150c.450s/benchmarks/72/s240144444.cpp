#include<iostream>
#include<string>
using namespace std;


int main()
{
	string s;
	getline(std::cin, s);
	for (int i = 0; i < s.length(); i++){
		if ('a' <= s[i] && s[i] <= 'z'){
			s[i] = s[i] + ('A' - 'a');
		}
		else if ('A' <= s[i] && s[i] <= 'Z'){
			s[i] = s[i] - ('A' - 'a');
		}
	}
		cout << s << endl;

	return 0;
}