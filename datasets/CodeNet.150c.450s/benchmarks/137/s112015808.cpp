#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

#define M 1046527

typedef long long ll;

char H[M][20];

int getChar(char ch) {
    if (ch == 'A') return 1;
    else if (ch == 'C') return 2;
    else if (ch == 'G') return 3;
    else if (ch == 'T') return 4;
    else return 0;
}

ll getKey(char str[]) {
    ll sum = 0, p = 1, i;
    for (int i = 0; i < strlen(str); i++) {
        sum += p * getChar(str[i]);
        p *= 5;
    }
    return sum;
}

int h1(int key) {return key % M;}
int h2(int key) {return 1 + (key % (M - 1));}

int find(char str[]) {
    ll key, i, h;
    key = getKey(str);
    for (int i = 0; ; i++) {
        h = (h1(key) + i * h2(key)) % M;
        if (strcmp(H[h], str) == 0) return 1;
        else if (strlen(H[h]) == 0) return 0;
    }
}

int insert(char str[]) {
    ll key, i, h;
    key = getKey(str);
    for (int i = 0; ; i++) {
        h = (h1(key) + i * h2(key)) % M;
        if (strcmp(H[h], str) == 0) return 1;
        else if (strlen(H[h]) == 0) {
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
}

char cmd[10];
char str[10];
int n;

int main() {
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    scanf("%d", &n);
    while (n--) {
        scanf("%s %s", cmd, str);
        if (cmd[0] == 'i') {
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