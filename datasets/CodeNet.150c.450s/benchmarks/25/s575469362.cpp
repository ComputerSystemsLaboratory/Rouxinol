#include <iostream>
using namespace std;

int main(void) {
    char c;
    int cnt[26];
    for (int i = 0; i < 26; i++) cnt[i] = 0;
    while (cin >> c) {
        if (isalpha(c)) {
            c = tolower(c);
            cnt[c - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " : " << cnt[i] << endl;
    }
    return 0;
}