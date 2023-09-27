#include<iostream>

using namespace std;

int main () {

    char c;
    int num;
    int cnt[26] = {0};

    while (cin >> c) {

        // if (c == '0') break;

        if ('a' <= c && c <= 'z') {
            num = c - 'a';
            cnt[num]++;
        } else if ('A' <= c && c <= 'Z') {
            num = c - 'A';
            cnt[num]++;
        }
    }

    for (int i = 0; i < 26; i ++) {
        char a = i + 'a';
        cout << a << " : " << cnt[i] << endl;
    }

    return 0;

}
