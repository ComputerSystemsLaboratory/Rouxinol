#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int mprofit = -1111111111;
    int minv = prices[0];
    for (int i = 1; i < n; i++) {
        mprofit = max(mprofit, prices[i] - minv);
        minv = min(minv, prices[i]);
    }

    cout << mprofit << endl;
    return 0;
}