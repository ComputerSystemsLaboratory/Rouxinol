#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;

int countN, n[20], countQ, q;

bool solve(int i, int m) {
    if (m == 0) return true;
    if (i >= countN) return false;
    return solve(i + 1, m) || solve(i + 1, m - n[i]);
}

        
int main() {
    cin >> countN;
    for (int i = 0; i < countN; i++) {
        cin >> n[i];
    }

    cin >> countQ;
    for (int i = 0; i < countQ; i++) {
        cin >> q;
        if (solve(0, q)) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}