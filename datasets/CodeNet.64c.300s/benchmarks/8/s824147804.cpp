#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<numeric>

#define REP(i, a) for(int i=0;i<(int)a;++i)
#define INF 1145141919;
typedef long long ll;
typedef long double ld;
using namespace std;

void call(int n) {
    int i = 1;
    while (i++ < n) {
        int x = i;
        if (x % 3 == 0) {
            cout << " " << i;
            continue;
        }
        bool f = false;
        while (x > 0) {
            if (x % 10 == 3) {
                cout << " " << i;
                f = true;
                break;
            }
            x /= 10;
        }
        if (f)continue;
    }
    cout << endl;
}

void solver() {
    int n;
    cin >> n;
    call(n);
}

int main() {
    solver();
    return 0;
}