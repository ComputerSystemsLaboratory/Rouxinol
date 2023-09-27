#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    int n;
    vector<int> vi;
    while (cin >> n, n) {
        vi.clear();
        for (int i = 0; i < n; i++) {
            int s;
            cin >> s;
            vi.push_back(s);
        }
        sort(vi.begin(), vi.end());
        cout << accumulate(vi.begin()+1, vi.end()-1, 0) / (n-2) << endl;
    }
    return 0;
}