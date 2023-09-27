#include<string>
#include<cstdio>
#include<iostream>
using namespace std;

int main() {
    string W, T;
    
    cin >> W;
    
    for (int i = 0; i < W.size(); i++) {
        if ('A' <= W[i] && W[i] <= 'Z') W[i] += 'a' - 'A';
    }
    
    int count = 0;
    while(cin >> T) {
        if (T == "END_OF_TEXT") break;
        for (int i = 0; i < T.size(); i++){
            if ('A' <= T[i] && T[i] <= 'Z') T[i] += 'a' - 'A';
        }
        if (W == T) count++;
    }
    
    printf("%d\n", count);
}
