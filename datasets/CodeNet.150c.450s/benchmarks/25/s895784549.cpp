#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main() {
    int num[26] = {};
    char ch;
    while (cin >> ch) {
        if (islower(ch)) num[ch-'a'] += 1;
        else if (isupper(ch)) num[ch-'A'] += 1;
    }
    for (int i = 0; i < 26; i++) {
        printf("%c : %d\n", i+'a', num[i]);
    }
    return 0;
}
