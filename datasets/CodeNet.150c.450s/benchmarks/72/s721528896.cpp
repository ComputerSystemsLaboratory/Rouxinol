#include <iostream>
using namespace std;

int main(void) {
    string s;
    char c;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (!isalpha(s[i]))  cout << s[i];
        else {
            if (isupper(s[i]))  c = tolower(s[i]);
            else c = toupper(s[i]);
            cout << c;
        }
    }
    cout << endl;
    return 0;
}