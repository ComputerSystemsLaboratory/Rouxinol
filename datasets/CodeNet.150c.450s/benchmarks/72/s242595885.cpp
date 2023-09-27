#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {

	string str;
	getline(cin, str);

    for (int i = 0; i < str.size(); ++i) {
        char c = str[i];
        if ('a' <= c && c <= 'z') cout << (char)(c-'a'+'A');
        else if ('A' <= c && c <= 'Z') cout << (char)(c-'A'+'a');
        else cout << c;
    }

    cout << endl;

    
    return 0;
}