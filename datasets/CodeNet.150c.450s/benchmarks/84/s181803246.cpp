#include <bits/stdc++.h>

#define REP(i,n) for (int i=0;i<(n);i++)

using namespace std;

class binary_indexed_tree {
    private:
        int size;
        long long *a;
    public:
        binary_indexed_tree(int n);
        void add(int i, long long x);
        long long sum(int i);
};

binary_indexed_tree::binary_indexed_tree(int n)
{
    size = n;
    a = new long long[n]();
}

void binary_indexed_tree::add(int i, long long x)
{
    for (int j = i; j < size; j |= j + 1) {
        a[j] += x;
    }
}

long long binary_indexed_tree::sum(int i)
{
    long long result = 0;
    for (int j = i; j >= 0; j = (j & (j + 1)) - 1) {
        result += a[j];
    }
    return result;
}

unsigned long long count_inversions_int(int *first, int *last, int max) {
    unsigned long long result = 0;
    binary_indexed_tree bit(max);
    for (int *it = last - 1; it >= first; --it) {
        result += bit.sum(*it-1);
        bit.add(*it, 1);
    }
    return result;
}

template <class Iterator>
unsigned long long count_inversions(Iterator first, Iterator last) {
    int size = distance(first, last);
    typedef typename iterator_traits<Iterator>::value_type T;
    pair<T, int> *a = new pair<T, int>[size];
    for (int i = 0; i < size; ++i) {
        a[i] = pair<T, int>(*(first + i), i);
    }
    sort(a, a + size);
    int *b = new int[size];
    for (int i = 0; i < size; ++i) {
        b[a[i].second] = i;
    }
    return count_inversions_int(b, b + size, size);
}

int main(void)
{
    int n;
    int a[200000];
    cin >> n;
    REP(i, n) cin >> a[i];
    cout << count_inversions(a, a + n) << endl;
    return 0;
}
