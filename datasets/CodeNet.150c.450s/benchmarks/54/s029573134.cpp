#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>

using namespace std;

char ToLower(char c){
	return tolower(c);
}

void tolower(string &s){
	transform(s.begin(), s.end(), s.begin(), ToLower);
}

int main(int argc, char *argv[]){
	string W;
	string Ti;
	getline(cin, W);
	tolower(W);
	int count = 0;
	while(1){
		cin >> Ti;
		if(Ti == "END_OF_TEXT")break;
		tolower(Ti);
		if(Ti == W)count++;
	}
	cout << count << endl;
	return 0;
}