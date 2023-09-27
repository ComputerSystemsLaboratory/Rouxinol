#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <numeric>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <stack>

const int MOD = 1e9 + 7;
const int iINF = 1000000000;
const long long int llINF = 1000000000000000000;
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using edge = struct
{
    int to;
    int cost;
};

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

class SegmentTree
{
  private:
    int N = 1;
    vector<int> node;

  public:
    SegmentTree(vector<int> vec, int initial_value)
    {
        int size = vec.size();

        while (N < size)
            N *= 2;

        node.resize(2 * N - 1, initial_value);

        rep(i, size) node[i + N - 1] = vec[i];

        for (int i = N - 2; i >= 0; i--)
            node[i] = node[i * 2 + 1] + node[i * 2 + 2];
    }

    void add(int i, int value)
    {
        i += N - 1;
        node[i] += value;

        while(i > 0)
        {
            i = (i - 1) / 2;
            node[i] = node[i * 2 + 1] + node[i * 2 + 2];
        }
    }

    int getsum(int a, int b, int k = 0, int l = 0, int r = -1)
    {
        if(r < 0) r = N;
        if(r <= a || b <= l) return 0;
        if(a <= l && r <= b) return node[k];

        int vl = getsum(a, b, 2 * k + 1, l, (l + r) / 2);
        int vr = getsum(a, b, 2 * k + 2, (l + r) / 2, r);

        return vl + vr;
    }
};

int main()
{
    int N, Q;
    cin >> N >> Q;
    SegmentTree seg(vector<int>(N, 0), 0);

    rep(i, Q)
    {
        int com, x, y;
        cin >> com >> x >> y;
        if(com == 0)
        {
            seg.add(x - 1, y);
        }
        else
        {
            cout << seg.getsum(x - 1, y) << endl;
        }
    }
    return 0;
}
