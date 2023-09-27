#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

#define M 1046527
#define L 15

char H[M][L];

long long convertToNum(char* str) {
    long long result = 0;
    int i = 0;
    int len = strlen(str);
    for (int i = 0; i < len; ++i) {
        int j = 0;
        switch (str[i]) {
            case 'A':
                j = 1;
                break;
            case 'C':
                j = 2;
                break;
            case 'G':
                j = 3;
                break;
            case 'T':
                j = 4;
                break;
        }
        result += j * pow(5, i);
    }
    return result;
}

int h1(int i) {
    return i % M;
}

int h2(long long i) {
    return 1 + i % (M - 1);
}

int getHash(long long key, int i) {
    return (h1(key) + h2(key) * i) % M;
}

bool find(char* str) {
    int i = 0;
    long long num = convertToNum(str);
    while (int key = getHash(num, i++)) {
        if (strcmp(H[key], str) == 0) {
            return true;
        }
        if (H[key][0] == '\0') break;
    }
    return false;
}

void insert(char* str) {
    int i = 0;
    long long num = convertToNum(str);
    while (int key = getHash(num, i++)) {
        if (strcmp(H[key], str) == 0) break;
        if (H[key][0] == '\0') {
            strcpy(H[key], str);
            break;
        }
    }
    return;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < M; ++i) { H[i][0] = '\0'; }

    for (int i = 0; i < n; ++i) {
        char command[7];
        char c[L];
        scanf("%s %s", command, c);
        if (command[0] == 'i') insert(c);
        if (command[0] == 'f') {
            if (find(c)) {
                printf("yes\n");
            }
            else {
                printf("no\n");
            }
        }
    }
    return 0;
}