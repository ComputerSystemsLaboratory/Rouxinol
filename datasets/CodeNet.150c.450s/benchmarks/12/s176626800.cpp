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

int a;
vector<int> l;

void printParentIfAvailable(int index) {
    if (index / 2) {
        cout << "parent key = " << l[index / 2 - 1] << ", ";
    }
}

void printLeftIfAvailable(int index) {
    if (index * 2 <= a) {
        cout << "left key = " << l[index * 2 - 1] << ", ";
    }
}

void printRightIfAvailable(int index) {
    if (index * 2 + 1 <= a) {
        cout << "right key = " << l[index * 2] << ", ";
    }
}

int main() {
    cin >> a;
    PUSH(a, l);
    REP(i,a) {
        cout << "node " << i+1 << ": key = " << l[i] << ", ";
        printParentIfAvailable(i+1);
        printLeftIfAvailable(i+1);
        printRightIfAvailable(i+1);
        cout << endl;
    }
    return 0;
}