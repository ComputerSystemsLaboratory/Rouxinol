#include <iostream>

using namespace std;

#define N 1000000

int main(){
    bool p[N];
    for (int i = 0; i < N; i++) p[i] = 1;
    p[0] = p[1] = 0;
    p[2] = p[3] = 1;
    for (int i = 1; i < N; i++) {
        if (!p[i]) continue;
        for (int j = i*2; j < N; j += i) { p[j] = 0; }
    }

    int a, d, n;
    int res;
    while (cin >> a >> d >> n && a && d && n) {
        int cnt = 0;
        while (cnt < n) {
            if (p[a]) cnt++;
            res = a;
            a += d;
        }
        cout << res << endl;
    }


    return 0;
}