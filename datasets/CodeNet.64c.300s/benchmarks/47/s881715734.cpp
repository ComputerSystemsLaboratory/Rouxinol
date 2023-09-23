#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, cntMax = -1;
    int cnt[101] = {0};

    while(cin >> num) {
       ++cnt[num];
    }

    for(int i = 1; i <= 100; ++i) {
        cntMax = max(cntMax, cnt[i]);
    }

    for(int i = 1; i <= 100; ++i) {
        if(cnt[i] == cntMax) cout << i << endl;
    }

}