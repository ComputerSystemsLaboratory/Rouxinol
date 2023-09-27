#include <iostream>
#include <string>
#include <cctype>

using namespace std;

#define rep(i,n) for(int i=0;i<(int)n;i++)

int alpha[30];

int main() {
    string S;
    while (cin >> S) {
        int num = 30;
        rep(i, S.size()) {
            num = tolower(S[i]) - 'a';
            if (0 <= num&&num <= 26)alpha[num]++;
        }
    }

    rep(i, 26) {
        cout << char('a' + i) << ' ' << ':' << ' ' << alpha[i] << endl;
    }
}
