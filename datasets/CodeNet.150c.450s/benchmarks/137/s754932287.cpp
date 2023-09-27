#include <iostream>
#include <string.h>
#include <stdio.h>

#define M 1046527
#define NIL (-1)
#define L 14

char Hash[M][L];

// ??????????????°????????????
int getchar(char ch) {
    if ( ch == 'A' ) return 1;
    else if ( ch == 'C' ) return 2;
    else if ( ch == 'G' ) return 3;
    else if ( ch == 'T' ) return 4;
    else return 0;
}

long long getkey (char str[]) {
    long long sum = 0, p = 1, i;
    for ( i = 0; i < strlen(str); i++ ) {
        sum += p*(getchar(str[i]));
        p *= 5;
    }
    return sum;
}

int h1 ( int key ) { return key % M; }
int h2 ( int key ) { return 1 + (key % (M-1)); }

int find( char str[] ) {
    long long key, h, i;
    key = getkey(str);
    for ( i = 0; ; i++ ) {
        h = (h1(key) + i*h2(key)) % M;
        if ( strcmp(Hash[h], str) == 0 ) return 1;
        else if ( strlen(Hash[h]) == 0 ) return 0;
    }
    return 0;
}

int insert( char str[] ) {
    long long key, h, i;
    key = getkey(str);
    for ( i = 0; ; i++ ) {
        h = (h1(key) + i * h2(key)) % M;
        if ( strcmp(Hash[h], str) == 0 ) return 1;
        else if ( strlen(Hash[h]) == 0 ) {
            strcpy(Hash[h], str);
            return 0;
        }
    }
    return 0;
}

int main() {
    int n;
    char ORDER[10], MOJI[L];
    
    for (int i = 0; i < M; i++) Hash[i][0] = '\0';
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %s", ORDER, MOJI);
        if ( ORDER[0] == 'i' ) insert(MOJI);
        else {
            if ( find(MOJI) ) printf("yes\n");
            else printf("no\n");
        }
    }
    return 0;
}