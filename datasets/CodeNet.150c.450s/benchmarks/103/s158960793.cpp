#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int fact(int n) {
    if (n == 0) return 1;
    else return n * fact(n-1);
}

void solve30(int n, int s) {
    int cnt = 0;
    vector<int> data = {0,1,2,3,4,5,6,7,8,9};
    int skip = fact(10 - n);
    int i = 0;
    do {
        if (i % skip == 0) if (accumulate(data.begin(), data.begin() + n, 0) == s) {
            cnt++;
        }
        i++;
    }while (next_permutation(data.begin(), data.end()));
    cout << cnt / fact(n) << endl;
}

int main() {
    int n, s;
    while(cin >> n >> s, n + s) {
        solve30(n, s);
    }
    return 0;
}