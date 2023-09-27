#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    string taro, hanako;

    int ptTaro = 0;
    int ptHanako = 0;
    REP(i, n) {
        cin >> taro >> hanako;
        if (taro > hanako) ptTaro += 3;
        if (taro < hanako) ptHanako += 3;
        if (taro == hanako) {
            ptTaro++;
            ptHanako++;
        }
    }

    cout << ptTaro << " " << ptHanako << endl;
}