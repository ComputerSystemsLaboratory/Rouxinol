#include <iostream>

using namespace std;

#define M 1046527
#define L 14

string H[M];

int getChar(char ch) {
    switch (ch) {
        case 'A':
            return 1;
        case 'C':
            return 2;
        case 'G':
            return 3;
        case 'T':
            return 4;
        default:
            return 0;
    }
}

long long getKey(string str) {
    long long sum = 0, p = 1, i;

    for (i = 0; i < str.size(); i++) {
        sum += p*(getChar(str[i]));
        p *= 5;
    }

    return sum;
}

int h1(int key) {
    return key % M;
}

int h2(int key) {
    return 1 + (key % (M - 1));
}

bool find(string str) {
    long long key, i, h;
    key = getKey(str);

    for (i = 0; ; i++) {
        h = (h1(key) + i * h2(key)) % M;
        if (H[h] == str) {
            return true;
        } else if (H[h].empty()) {
            return false;
        }
    }
}

bool insert(string str) {
    long long key, i, h;
    key = getKey(str);

    for (i = 0; ; i++) {
        h = (h1(key) + i * h2(key)) % M;
        if (H[h] == str) {
            return false;
        } else if (H[h].empty()) {
            H[h] = str;
            return true;
        }
    }
}

int main() {
    int n, h;
    char cStr[L], com[9];
    string str;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s %s", com, cStr);
        str = cStr;

        if (com[0] == 'i') {
            insert(str);
        } else {
            if (find(str)) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}