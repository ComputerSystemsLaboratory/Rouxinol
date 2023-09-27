#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <bitset>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <iostream>
#include <iomanip>
#include <string>
#include <chrono>
#include <random>
#include <cmath>
#include <cassert>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <functional>
#include <sstream>

using namespace std;


int main(int argc, char** argv) {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed << setprecision(12);

    int n, K;
    cin >> n >> K;
    vector<int> A(n, 0);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i + K < n; ++i) {
        if (A[i] >= A[i + K]) {
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }



    return 0;
}