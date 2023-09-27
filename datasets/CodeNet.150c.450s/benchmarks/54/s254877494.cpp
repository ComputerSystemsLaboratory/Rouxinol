#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string getLowerString(string s) {
    string t = s;
    for (int i = 0; i < s.size(); i++) {
        t[i] = tolower(s[i]);
    }
    return t;
}
int main() {
    string W, T;
    int count = 0;
    cin >> W;
    W = getLowerString(W);
    while (1) {
        cin >> T;
        if (T == "END_OF_TEXT") break;
        T = getLowerString(T);
        if (W == T) count++;
    }
    cout << count << endl;
    return 0;
}
