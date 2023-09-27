#include <bits/stdc++.h>
using namespace std;

bool func() {
    int counter = 0;
    unsigned long long N, A, B, C, X;
    cin >> N >> A >> B >> C >> X;
    if(N==0 && A==0 && B==0 && C==0 && X==0) return true;
    for(int i=0; i<N; i++) {
        if(i>0) {
            X = (A*X + B) % C;
            counter++;
        }
        int n;
        cin >> n;

        while(X!=n && counter<10001) {
            X = (A*X + B) % C;
            counter++;
        }
    }
    if(counter<10001) {
        printf("%d\n", counter);
    } else {
        printf("%d\n", -1);
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    bool flag = false;
    while(!flag) {
        flag = func();
    }
    return 0;
}

