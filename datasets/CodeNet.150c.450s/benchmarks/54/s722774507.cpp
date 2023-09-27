#include <iostream>
using namespace std;

string lower(string str) {
    char c;
    for (int i = 0; i < str.size(); i++) {
        if (isupper(str[i])) {
            c = tolower(str[i]);
            str[i] = c;
        }
    }
    return str;
}


int main(void) {
    string w, s;
    int cnt = 0;
    cin >> w;
    w = lower(w);
    while (1) {
        cin >> s;
        if (s == "END_OF_TEXT") break;
        s = lower(s);
        if (s == w) cnt++;
    }
    cout << cnt << endl;
    return 0;
}