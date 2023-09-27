#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

#define FOR(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
using namespace std;

void solver() {
    int N;
    while (cin >> N) {
        int ans = 0;
        FOR(a, 10)FOR(b, 10)FOR(c, 10) {
                    int d = N - (a + b + c);
                    if (d >= 0 && d < 10) {
                        ans++;
                    }
                }
        cout << ans << endl;
    }
}

int main() {
    solver();
    return 0;
}