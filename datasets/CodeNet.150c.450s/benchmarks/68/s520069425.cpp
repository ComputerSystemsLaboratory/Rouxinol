#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;
int main()
{
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vector<int> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        sort(s.begin(), s.end());
        int minv = numeric_limits<int>::max();
        for (int i = 0; i < n - 1; i++) {
            if (minv > s[i + 1] - s[i]) {
                minv = s[i + 1] - s[i];
            }
        }
        cout << minv << endl;
    }
    return 0;
}