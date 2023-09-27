#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

#define REP(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
typedef long double ld;
using namespace std;

int a, b, c;
int cnt = 0;

void solver() {
    cin >> a >> b >> c;
    for (int i = a; i <= b; ++i) {
        if (c % i == 0)cnt++;
    }
    cout << cnt << endl;
}

int main() {
    solver();
    return 0;
}