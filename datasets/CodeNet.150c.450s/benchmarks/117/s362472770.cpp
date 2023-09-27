#include <algorithm>
#include <functional>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        v.push_back(s);
    }

    auto merge = [&v](int left, int mid, int right) {
        int count = 0;
        int n1 = mid - left;
        int n2 = right - mid;
        vector<int> l(n1 + 1);
        vector<int> r(n2 + 1);
        for (int i = 0; i < n1; ++i) {
            l[i] = v[left + i];
        }
        for (int i = 0; i < n2; ++i) {
            r[i] = v[mid + i];
        }
        l[n1] = numeric_limits<int>::max();
        r[n2] = numeric_limits<int>::max();

        int i = 0;
        int j = 0;
        for (int k = left; k < right; ++k) {
            count += 1;
            if (l[i] <= r[j]) {
                v[k] = l[i];
                i += 1;
            }
            else {
                v[k] = r[j];
                j += 1;
            }
        }
        return count;
    };

    function<int(int, int)> mergeSort = [&merge, &mergeSort](int left,
                                                             int right) {
        int count = 0;
        if (left + 1 < right) {
            int mid = (left + right) / 2;
            count += mergeSort(left, mid);
            count += mergeSort(mid, right);
            count += merge(left, mid, right);
        }
        return count;
    };

    auto r = mergeSort(0, n);
    for (int i = 0; i < n; ++i) {
        if (i != 0) {
            cout << ' ';
        }
        cout << v[i];
    }
    cout << endl;
    cout << r << endl;
}