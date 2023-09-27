#include <bits/stdc++.h>
using namespace std;

int q;

struct proc
{
    int time;
    int ind;
    char name[20];
};
bool operator<(const proc& l, const proc& r) {
    if ((l.time - 1) / q == (r.time - 1) / q)
        return l.ind < r.ind;

    return (l.time - 1) / q < (r.time - 1) / q;
}

class BIT {
    private:
        int n;
        vector<int> bit;
    public:
        BIT(int _n) { n = _n; bit.resize(n + 1); }
        void add(int j, long w) { for (int i = j; i < n; i |= i + 1) bit[i] += w; }
        // [0, j)
        int sum(int j) {
            int ret = 0;
            for (int i = j - 1; i >= 0; i = (i & (i + 1)) - 1) ret += bit[i];
            return ret;
        }
        // [j, k)
        int sum(int j, int k) { return sum(k) - sum(j); }
};

int main() {
    int n;
    cin >> n >> q;
    vector<proc> prs(n);
    for (int i = 0; i < n; i++) {
        prs[i].ind = i;
//        cin >> prs[i].name >> prs[i].time;
        scanf("%s %d", &prs[i].name, &prs[i].time);
    }
    sort(prs.begin(), prs.end());
    int sum = 0;
    BIT bit(n);
    for (int i = 0; i < n; ++i)
    {
        printf("%s %d\n", prs[i].name, prs[i].time + (prs[i].time - 1) / q * q * (n - i - 1) + (prs[i].ind - bit.sum(prs[i].ind)) * q + sum);
        sum += prs[i].time;
        bit.add(prs[i].ind, 1);
    }
    return 0;
}