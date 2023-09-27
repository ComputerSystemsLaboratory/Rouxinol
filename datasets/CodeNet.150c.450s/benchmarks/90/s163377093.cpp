#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    vector<int> data(101);
    int n;
    while (cin >> n && n) {
        data[n] ++;
    }

    int maxn = *max_element(data.begin(), data.end());
    for (int i=0; i<101; ++i) {
        if (data[i] == maxn) {
            cout << i << endl;
        }
    }

    return 0;
}