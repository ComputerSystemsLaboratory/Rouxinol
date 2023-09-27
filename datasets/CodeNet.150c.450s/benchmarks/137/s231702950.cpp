#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

#define M 1046527
#define L 15


struct Node {
    char value[L];
    Node* next;
};

Node* nil;
Node* H[M];

long long getKey(char* str) {
    long long result = 0;
    for (int i = 0; i < strlen(str); ++i) {
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
    return result % M;
}

bool find(char* str) {
    int i = 0;
    long long key = getKey(str);
    Node* cur = H[key];
    while (cur != nil) {
        if (strcmp(cur->value, str) == 0) return true;
        cur = cur->next;
    }
    return false;
}

void insert(char* str) {
    int i = 0;
    long long key = getKey(str);
    Node* cur = H[key];
    Node* node = (Node *)malloc(sizeof(Node));
    strcpy(node->value, str);
    node->next = cur;
    H[key] = node;
    return;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < M; ++i) { H[i] = nil; }

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