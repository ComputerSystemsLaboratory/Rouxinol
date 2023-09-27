#include <bits/stdc++.h>
using namespace std;
#define Lim 9999991
#define Jmp 100003

int dic[Lim];

int toint(string s) {
    int ret = 0;
    for (int i = 0; i < s.size(); ++i) {
        ret *= 5;
        switch (s[i]) {
            case 'A':
                ret += 1;
                break;
            case 'T':
                ret += 2;
                break;
            case 'G':
                ret += 3;
                break;
            case 'C':
                ret += 4;
                break;
        }
    }
    return ret;
}

void push(string s) {
    int a = toint(s);
    int i = a;
    while (true) {
        if (!dic[i]) {
            dic[i] = a;
            return;
        }
        i += Jmp;
    }
}

int find(string s) {
    int a = toint(s);
    int i = a;
    while (true) {
        if (!dic[i]) {
            return 0;
        }
        if (dic[i] == a) {
            return 1;
        }
        i += Jmp;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string s, t;
        cin >> s >> t;
        if (s == "insert") {
            push(t);
        }
        else {
            if (find(t)) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
    }
    return 0;
}