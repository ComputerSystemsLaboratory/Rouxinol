#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define FOR(i,a,b) for(int (i)=(a); (i)<(b); (i)++)
#define PUSH(n,v) for(int i=0; i<(n); i++) {int j; cin >> j; v.push_back(j);}
#define ALL(v) v.begin(), v.end()

long money = 100000;

void oneweekafter() {
    money *= 1.05;
    money = ceil(money / 1000.) * 1000;
}

int main() {
    int n;
    cin >> n;
    REP(i,n) {
        oneweekafter();
    }
    cout << money << endl;
    return 0;
}