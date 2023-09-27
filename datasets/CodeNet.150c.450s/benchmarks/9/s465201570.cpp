#include<iostream>
#include<string>
using namespace std;

string shuffle(int h, string s){
	string newString = s;
	for (int i = 0; i < s.length(); i++){
		newString[(s.length() + i - h) % s.length()] = s[i];
	}
	return newString;
}


int main()
{
	string s;
	int m, h;
	while (cin >> s, s!="-"){
		cin >> m;
		for (int i = 0; i < m; i++){
			cin >> h;
			s = shuffle(h, s);
		}
		cout << s << endl;
	}
	return 0;
}