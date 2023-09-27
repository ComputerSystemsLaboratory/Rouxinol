#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int res = n;
    vector<int> vprime;
    int sqr = int(sqrt(n));

    for (int i = 2; i <= sqr; ++i) {
        while (res % i == 0) {
            res /= i;
            vprime.push_back(i);
        }
        if (n == 1) {
            break;
        }
    }
    if (res > sqr) {
        vprime.push_back(res);
    }

    cout << n << ":";
    
    for (size_t i = 0; i < vprime.size(); ++i) {
        cout << " " << vprime[i];
    }
    cout << endl;

    return 0;
}
