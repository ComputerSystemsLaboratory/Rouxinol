//
// Created by tattsun on 2017/02/20.
//

#include <iostream>

#define N_MAX 10001

using namespace std;

int n, q;
int s[N_MAX];

int min(int x, int y) {
    if(x<y) return x;
    return y;
}

void _unite(int sm, int lg) {
    int smset = s[sm];
    int lgset = s[lg];
    for(int i=0; i<n; i++) {
        if(s[i] == lgset)
            s[i] = smset;
    }
}

void unite(int x, int y) {
    if(s[x]<s[y]) _unite(x, y);
    else _unite(y, x);
}

int same(int x, int y) {
    return s[x] == s[y];
}

int main() {
    cin >> n >> q;

    for(int i=0; i<=n; i++) {
        s[i] = i;
    }

    int com, x, y;
    for(int i=0; i<q; i++) {
        cin >> com >> x >> y;
        if(com == 0) {
            unite(x, y);
        } else if(com == 1) {
            cout << same(x, y) << endl;
        } else {
            cout << "error: unknown command " << com << endl;
            exit(1);
        }
    }
}