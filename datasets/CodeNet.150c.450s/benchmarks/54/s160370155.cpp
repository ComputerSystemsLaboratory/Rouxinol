#include<iostream>
#include<string>
using namespace std;

string toUpperString(string s){
	for (int i = 0; i < s.length(); i++){
		if ('a' <= s[i] && s[i] <= 'z'){
			s[i] = s[i] + 'A' - 'a';
		}
	}
	return s;
}


int main()
{
	string w, t;
	cin >> w;
	int counter = 0;
	while (cin >> t, t != "END_OF_TEXT"){
		if (toUpperString(w) == toUpperString(t)){
			counter++;
		}
	}
	cout << counter << endl;
	return 0;
}