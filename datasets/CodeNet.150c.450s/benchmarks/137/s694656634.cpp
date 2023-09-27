#include <cstdio>
#include <cstring>
#include <cstdlib>

#define M 1046527
#define NIL (-1)
#define L 14

char H[M][L];

int h1(int key) { return key % M; }
int h2(int key) { return 1 + (key % (M - 1)); }

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
    }
    return 0;
}

long long getKey(char str[]) {
    long long sum = 0, p = 1, i;
    for ( i=0; i < strlen(str); i++) {
        sum += p * (getChar(str[i]));
        p *= 5;
    }
    return sum;
}

int insert(char str[]) {
    long long key, i, h;
    key = getKey(str);
    for ( i=0;; i++ ) {
        h = (h1(key) + i * h2(key)) % M;
        if (strcmp(H[h], str) == 0) return 1;
        else if ( strlen(H[h]) == 0 ){
            strcpy(H[h], str);
            return 0;
        }
    }
    return 0;
};

bool find(char str[]) {
    long long key, i, h;
    key = getKey(str);
    for ( i=0;; i++ ) {
        h = (h1(key) + i * h2(key)) % M;
        if (strcmp(H[h], str) == 0) return true;
        else if (strlen(H[h]) == 0) return false;
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);

    char order[10], str[L];
    for (long long i=0; i < M; i++) H[i][0] = '\0';
    for (int i=0; i<n; i++) {
        scanf("%s %s", order, str);
        if (strcmp(order, "insert") == 0) {
            int x = insert(str);
        } else if (strcmp(order, "find") == 0) {
            bool x = find(str);
            if (x) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        }
    }

    return 0;
}