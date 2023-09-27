#include <iostream>
#include <cstdio>
#include <utility>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        pair<char,char> data[n];
        for (int i=0; i<n; i++) {
            cin >> data[i].first >> data[i].second;
        }
        int m;
        cin >> m;
        char str;
        while (m--) {
            cin >> str;
            for (int i=0; i<n; i++) {
                if (data[i].first==str) {
                    str=data[i].second;
                    break;
                }
            }
            printf("%c",str);
        }
        printf("\n");
    }
    return 0;
}