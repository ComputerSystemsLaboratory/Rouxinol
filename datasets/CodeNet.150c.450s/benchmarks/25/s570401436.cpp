#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {
    string  str;
    char letter;
    int index;
    int alphabet[26] = {};
    
    while(cin >> str) {
        for(int i = 0; i < str.length(); ++i) {
            letter = str[i];
            if(isalpha(letter)) {
                if(isupper(letter)) {
                    str[i] = tolower(letter);
                }
                index = str[i] - 'a';
                alphabet[index] += 1;
            }
        }
    }
    for(int i = 0; i < 26; ++i) {
        letter = 'a' + i;
        cout << letter << " : " << alphabet[i] << endl;
    }
    
    return 0;
}

