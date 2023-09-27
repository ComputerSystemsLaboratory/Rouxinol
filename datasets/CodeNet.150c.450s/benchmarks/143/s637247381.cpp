#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include<iomanip>
#include<functional>
using namespace std;
typedef long long ll;




// a と b の最大公約数を返す関数
long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    ll sum = 0;
    vector<ll> backet(1e7,0);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
        backet[A[i]]++;
        sum += A[i];
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        ll b, c;
        cin >> b >> c;
         sum -= backet[b] * b;
         sum += backet[b] * c;
         backet[c] += backet[b];
         backet[b] = 0;
        cout << sum << endl;
    }
}
