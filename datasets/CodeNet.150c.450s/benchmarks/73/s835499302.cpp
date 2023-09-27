#include <cstdio>
#include <vector>
using std::vector;

template <class T>
struct FenwickTree
{
    vector<T> dat;

    explicit FenwickTree(int size): dat(++size, 0) {}

    void add(int i, const T &v)
    { while (i < dat.size()) dat[i]+=v, i += i&-i;
    }

    T sum(int i) {
        T ret = 0;
        while (i > 0) ret+=dat[i], i -= i&-i;
        return ret;
    }
    inline T sum(int s, int t) { return sum(t) - sum(s-1); }
};

int main()
{
    int n, q;
    int com, x, y;
    scanf("%d %d", &n, &q);

    FenwickTree<int> ft(n);

    while(q--) {
        scanf("%d %d %d", &com, &x, &y);
        if (com == 0) ft.add(x, y);
        else printf("%d\n", ft.sum(x, y));
    }

}

