#include <iostream>
#include <stdio.h>
using namespace std;

static const int ALPHABETS = 26;

int main(void) {
    int alp[ALPHABETS] = {0};
    int c;

    while((c = getchar()) != EOF) {
        if('a' <= c && c <= 'z') alp[c-'a']++;
        if('A' <= c && c <= 'Z') alp[c-'A']++;
    }

    for(int i=0; i < ALPHABETS; i++)
        cout << (char)('a'+i) << " : " << alp[i] << endl;

    return 0;
}