#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(int argc, char **argv)
{
	string str, str2;
	cin >> str;

	int count = 0;
	while(cin >> str2) {
		if(str2 == "END_OF_TEXT") break;
		for(int i = 0; i < str2.size(); i++) str2[i] = tolower(str2[i]);
		if(str2 == str) count++;
	}
	cout << count << endl;

	return 0;
}