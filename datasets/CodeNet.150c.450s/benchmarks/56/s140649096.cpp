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
    long sum = 0;
    vector<int> v;
    REP(i,n) {
        int j;
        cin >> j;
        sum += j;
        v.push_back(j);
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[v.size()-1] << " " << sum << endl;
    return 0;
}