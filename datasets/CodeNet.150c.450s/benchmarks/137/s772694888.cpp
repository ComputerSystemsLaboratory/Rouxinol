#include <iostream>
#include <cstring>
using namespace std;

static const int MAX = 1000003;
static const int STRLEN = 13;
static const int CMDLEN = 7;
static const int KEYLEN = 14;

char H[MAX][KEYLEN];

int h1(int key) {
    return key % MAX;
}

int h2(int key) {
    return 1 + (key % (MAX - 1));
}

int getChar(char c) {
    if (c == 'A') return 1;
    else if (c == 'C') return 2;
    else if (c == 'G') return 3;
    else if (c == 'T') return 4;
    else return 0;
}

long long getKey(char str[]) {
    long long sum = 0, p = 1;
    for (int i = 0; i < strlen(str); i++) {
        sum += p * (getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int find(char str[]) {
    long long key, i = 0, h;
    key = getKey(str);
    while (1) {
        h = (h1(key) + i * h2(key)) % MAX;
        if (strcmp(H[h], str) == 0) {
            return 1;
        } else if (strlen(H[h]) == 0) {
            return 0;
        }
        i++;
    }
    return 0;
}

int insert(char str[]) {

    long long key, i = 0, h;
    key = getKey(str);
    while (1) {
        h = (h1(key) + i * h2(key)) % MAX;
        if (strcmp(H[h], str) == 0) {
            return 1;
        } else if (strlen(H[h]) == 0) {
            strcpy(H[h], str);
            return 0;
        }
        i++;
    }

    return 0;
}



int main (void) {
    int n;
    cin >> n;

    // initialize
    for (int i = 0; i < MAX; i++) {
        H[i][0] = '\0';
    }

    char str[STRLEN], cmd[CMDLEN];
    for (int i = 0; i < n; i++) {
        cin >> cmd >> str;

        if (cmd[0] == 'i') {
            insert(str);
        } else if (cmd[0] == 'f') {
            if (find(str)) {
                cout << "yes" << endl;
            } else {
                cout << "no" << endl;
            }
        }
    }

    return 0;
}