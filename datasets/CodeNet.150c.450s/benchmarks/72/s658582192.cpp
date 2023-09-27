#include <iostream>
#include <cstdio>
#include <cctype>
#include <string>
#include <cstdio>

using namespace std;

string s;

void solve() {
    int i = 0;
    for(;i < s.length();i++) {
        if(s[i] == '\n') break;
        if(islower(s[i])) printf("%c",toupper(s[i]));
        else if(isupper(s[i])) printf("%c",tolower(s[i]));
        else printf("%c", s[i]);
    }
    cout << endl;
}

int main() {
    getline(cin, s);
    solve();
}
