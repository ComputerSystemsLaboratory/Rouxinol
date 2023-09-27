#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
    // char S[15];
    // char T[1000];
    string S;
    string T;
    cin >> S;
    int cnt = 0;
    while(1) {
        cin >> T;
        if(T == "END_OF_TEXT") break;
        for(int i = 0; i < T.length(); i++) {
            if(T[i] >= 'A' && T[i] <= 'Z') {
                T[i] += 32;
            }
        }
        if(T == S) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
