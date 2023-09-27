#include <iostream>
#include <algorithm>
#include <numeric>
const int NUM = 10000;

using namespace std;

int main() {
    int n, a[NUM];
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cout << *min_element(a, a + n) << " "
         << *max_element(a, a + n) << " "
         << accumulate(a, a + n, 0LL) << endl;
    return 0;
}
