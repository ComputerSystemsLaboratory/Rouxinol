#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

#define FOR(i, a) for(int i=0;i<(int)a;++i)
typedef long long ll;
using namespace std;

void solver() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main() {
    solver();
    return 0;
}