#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    int q, t, f;
    array<int, 6> d;
    array<string, 3> tbl = {"12431", "03520", "01540"};
    auto idx=[&](int x){return distance(d.begin(), find(d.begin(), d.end(), x));};
    auto half=[](int x){return x < 3 ? x : 5 - x;};

    for (int &x: d)
        cin >> x;

    cin >> q;
    while (q-- && cin >> t >> f) {
        int ti = idx(t), fi = idx(f), r = 3 - half(ti) - half(fi);
        cout << d[tbl[r].find(to_string(ti) + to_string(fi)) != string::npos ? r : 5 - r]
            << endl;
    }

    return 0;
}

