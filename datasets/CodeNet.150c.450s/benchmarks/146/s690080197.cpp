#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

#define FOR(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
typedef long double ld;
using namespace std;

void solver() {
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        ld x1, x2, x3, x4, y1, y2, y3, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        auto isOK = (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1);
        if (isOK) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    solver();
    return 0;
}