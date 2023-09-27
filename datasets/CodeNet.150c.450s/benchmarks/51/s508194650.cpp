#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    vector<int> v;
    REP(i, 28) {
        int j;
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    For(i, 1, 31) {
        if (!binary_search(v.begin(), v.end(), i)) {
            cout << i << endl;
        }
    }
    return 0;
}