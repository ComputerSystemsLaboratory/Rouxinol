#include <algorithm>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <unordered_map>
#include <vector>

using namespace std;
int N;
vector<int> v;

bool isprime(int n) {
    if (n == 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; (i * i) <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N;
    v = vector<int>(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    for (int i : v) {
        if (isprime(i)) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}