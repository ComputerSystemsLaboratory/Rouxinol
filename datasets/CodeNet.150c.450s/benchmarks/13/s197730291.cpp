/* ITP1_8_D: Ring */

#include <iostream>
#include <string>
using namespace std;

bool has_word(string s, string word) {
    return s.find(word, 0) != string::npos;
}

int main() {
    string s, word;
    cin >> s >> word;
    cout << ( has_word(s + s, word) ? "Yes" : "No" ) << endl;
    return 0;
}