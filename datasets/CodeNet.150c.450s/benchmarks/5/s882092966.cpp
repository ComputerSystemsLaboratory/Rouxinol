#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int main() {
    int n;
    cin >> n;
    vector<int> v;
    REP(i,n) {
        int j;
        cin >> j;
        v.push_back(j);
    }
    reverse(v.begin(), v.end());
    REP(i,n-1) {
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;
    return 0;
}