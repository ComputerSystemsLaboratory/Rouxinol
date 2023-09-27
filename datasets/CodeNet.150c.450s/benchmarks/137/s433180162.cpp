#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

constexpr int M = 1046527;
constexpr int L = 14;

char H[M][L] = {{'\0'}};

int char2num(char ch) {
    if (ch == 'A') { return 0; }
    else if (ch == 'C') { return 1; }
    else if (ch == 'G') { return 2; }
    else if (ch == 'T') { return 3; }
    else return 0;
}

int getKey(const string& str) {
    int key = 0;
    for (int i = 0; i < str.length(); i++) {
        key += char2num(str[i]) << 2 * i;
    }
    return key;
}

int h1(const int& key) {
    return key % M;
}

int h2(const int& key) {
    return 1 + key % (M-1);
}

int getHash(const int& key, const int& i) {
    return (h1(key) + i * h2(key)) % M;
}

bool find(const string& str) {
    int key = getKey(str);
    for (int i = 0;; i++) {
        int h = getHash(key, i);
        if (str == H[h]) { return true; }
        else if (H[h][0] == '\0') { return false; }
    }
    return false;
}

bool insert(const string& str) {
    int key = getKey(str);
    for (int i = 0;; i++) {
        int h = getHash(key, i);
        if (str == H[h]) { return false; }
        else if (H[h][0] == '\0') {
            strcpy(H[h], str.c_str());
            return true;
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string cmd, str;
        cin >> cmd >> str;
        if (cmd == "insert") {
            insert(str);
        } else {
            string reply = find(str) ? "yes" : "no";
            cout << reply << endl;
        }
    }

    return 0;
}