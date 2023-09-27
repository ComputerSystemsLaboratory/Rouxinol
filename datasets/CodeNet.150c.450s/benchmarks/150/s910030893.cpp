#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using vi = std::vector<int>;

constexpr int ElementMax = 10'000;

vi CountingSort(const vi& src, int k);
void solve();

int main()
{
    solve();
    return 0;
}



void solve()
{
    using namespace std;

    int n;
    cin >> n;
    vi src(n);

    for (int& x : src)
        cin >> x;

    auto B = CountingSort(src, ElementMax);

    for (int i = 0; i < B.size(); ++i)
    {
        cout << B[i];
        if (i + 1 != n)
            cout << " ";
    }

    cout << endl;
}

vi CountingSort(const vi& src, int k)
{
    using namespace std;

    vi C(k + 1, 0);

    //C[i]にiの出現数を記録
    for (int in : src)
        ++C[in];

    //C[i]にi以下の数の出現数を記録
    for (int i = 1; i < C.size(); ++i)
        C[i] = C[i] + C[i - 1];

    vi out(src.size(), allocator<int>());

    for_each(make_reverse_iterator(src.cend()),
        make_reverse_iterator(src.cbegin()),
        [&out, &C](int x)
    {
        out[C[x] - 1] = x;
        --C[x];
    });

    return move(out);
}
