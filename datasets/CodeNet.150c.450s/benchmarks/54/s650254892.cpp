#include<cstdio>
#include<ctype.h>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;

int sum = 0;
string W, T;

int main(void){
    cin >> W;
    for (int i = 0; i < W.size(); i++){
            if (isupper(W[i])) W[i] = tolower(W[i]);
    }
    while(1){
        cin >> T;
        if (T == "END_OF_TEXT") break;
        for (int i = 0; i < T.size(); i++){
            if (isupper(T[i])) T[i] = tolower(T[i]);
        }
        if (T == W) sum++;
    }
    printf("%d\n", sum);
    return 0;
}