#include <ctype.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);
    for (int i = 0; i < sentence.length(); i++) {
        if (isupper(sentence[i]) > 0) {
            sentence[i] = tolower(sentence[i]);
        } else if (islower(sentence[i]) > 0){
            sentence[i] = toupper(sentence[i]);
        }
    }
    cout << sentence << endl;
}