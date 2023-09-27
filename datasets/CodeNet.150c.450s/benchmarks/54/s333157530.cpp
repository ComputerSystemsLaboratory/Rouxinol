#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main(){

	string s, w;
	int count = 0;

	cin >> w >> s;
	
	for (int i = 0; i < w.size(); i++){
		w[i] = tolower(w[i]);
	}


	while (s != "END_OF_TEXT"){

		for (int i = 0; i < s.size();i++){
			s[i] = tolower(s[i]);
		}

		if (s == w)count++;
		cin >> s;
	}

	cout << count << endl;

	return 0;
}
