#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string toLower(string str) {
    for(int i=0; i<str.length(); i++) {
	if(isupper(str[i])) str[i] = tolower(str[i]);
    }
    return str;
}

int main() {
    string str;
    cin >> str;
    int sum = 0;
    string temp;

    while(true) {
	cin >> temp;
	if(temp == "END_OF_TEXT") break;
	temp = toLower(temp);
	if(temp == str) ++sum;
    }

    cout << sum << endl;
}