#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <queue>
#include <bitset>
using namespace std;

#define int long long


signed main() {
    int n;
    cin >> n;

    vector<int> v(10050);
    for(int x = 1; x < 105; x++) {
        for(int y = 1; y < 105; y++) {
            for(int z = 1; z < 105; z++) {
                int m = x * x + y * y + z * z + x * y + y * z + z * x;
                if(m < 10050) v[m]++;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << v[i] << endl;
    }
    return 0;
}