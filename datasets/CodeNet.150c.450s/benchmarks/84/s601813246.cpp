#include <algorithm>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <tuple>
#include <vector>

using namespace std;

#define rep(i, n) for (int64_t i = 0; i < (n); i++)
#define irep(i, n) for (int64_t i = 0; i <= (n); i++)
#define rrep(i, n) for (int64_t i = (n)-1; i >= 0; i--)
#define rirep(i, n) for (int64_t i = n; i >= 0; i--)

class BinaryIndexedTree {
    vector<int> container;

public:
    BinaryIndexedTree(size_t size)
        : container(size + 1)
    {
        fill(container.begin(), container.end(), 0);
    }
    void add(size_t i, int v)
    {
        size_t idx = i + 1;
        while (idx < container.size()) {
            container[idx] += v;
            idx += idx & -idx;
        }
    }
    int find(size_t i)
    {
        size_t idx = i;

        int result = 0;
        while (idx != 0) {
            result = container[idx] + result;
            idx -= idx & -idx;
        }
        return result;
    }
};

template <typename T>
void compress(vector<T>& v)
{
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
}

int main()
{
    int n;
    cin >> n;

    vector<int> as;
    vector<int> xs;
    rep(i, n)
    {
        int a;
        cin >> a;
        as.push_back(a);
        xs.push_back(a);
    }

    compress(xs);

    BinaryIndexedTree bit(xs.size());
    int64_t result = 0;
    rep(i, n)
    {
        size_t aIdx = lower_bound(xs.begin(), xs.end(), as[i]) - xs.begin();
        result += bit.find(xs.size()) - bit.find(aIdx + 1);
        bit.add(aIdx, 1);
    }

    cout << result << endl;

    return 0;
}
