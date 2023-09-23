#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(void) {
    string str;
    char letter;
    
    getline(cin, str);
    
    for(int i = 0; i < str.length(); ++i) {
        letter = str[i];
        if(islower(letter))   str[i] = toupper(letter);
        else if(isupper(letter))   str[i] = tolower(letter);
    }
    
    cout << str << endl;
    
    return 0;
}

