#include <iostream>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
using namespace std;

int main() {
    int N;
    int K;
    cin >> N >> K;

    vector <int> val(N);

    for (int i = 0; i < N; ++i) {
        cin >> val[i];
    }

    for (int i = K; i < N; ++i) {
        if (val[i] > val[i-K]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}