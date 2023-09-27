#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

string toUpper(string s) {
    string t = s;
    REP(i, s.size()) {
        t[i] = toupper(s[i]);
    }
    return t;
}

int main() {
    string myWord;
    cin >> myWord;
    myWord = toUpper(myWord);

    int counter = 0;
    while (1) {
        string myText;
        cin >> myText;
        if (myText == "END_OF_TEXT") break;
        myText = toUpper(myText);
        if (myWord == myText) counter++;
    }

    cout << counter << endl;
}