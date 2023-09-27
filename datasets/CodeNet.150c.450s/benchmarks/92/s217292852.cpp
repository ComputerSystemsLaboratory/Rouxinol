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

int getdigit(int a) {
    if (a == 0) return 1;
    int cnt = 0;
    while(a) {
        cnt++;
        a /= 10;
    }
    return cnt;
}

int main() {
    int i, j;
    while(cin >> i >> j) {
        cout << getdigit(i+j) << endl;
    }
    return 0;
}