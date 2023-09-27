#include<stdio.h>
#include<string.h>

#define M 1000000
#define NIL (-1)
#define L 12

char H[M][L];


int getInt(char c) {
    if (c == 'A') return 1;
    else if (c == 'C') return 2;
    else if (c == 'G') return 3;
    else if (c == 'T') return 4;
    else return -1;
}

long long getKey(char str[]) {
    long long sum = 0, p = 1;

    for (long long i = 0; i < strlen(str); i++) {
        sum += p * getInt(str[i]);
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

long long h(int key, int i) {
    return (h1(key) + i * h2(key)) % M;
}

int insert(char s[]) {
    long long key, hash, i = 0;

    key = getKey(s);

    while (true) {
        hash = h(key, i);
        if (strcmp(H[hash], s) == 0) {
            return 1;    
        } else if (strlen(H[hash]) == 0) {
            strcpy(H[hash], s);
            return 0;
        }
        i++;
    }
}

int find(char s[]) {
    long long key, hash, i = 0;

    key = getKey(s);

    while (true) {
        hash = h(key, i);
        if (strcmp(H[hash], s) == 0) {
            return 1;    
        } else if (strlen(H[hash]) == 0) {
            return 0;
        }
        i++;
    }
}

int main() {
    char order[L], str[L];
    int n;

    for (int i = 0; i < M; i++) {
        H[i][0] = '\0';
    }

    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%s %s", order, str);

        if (order[0] == 'i') {
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