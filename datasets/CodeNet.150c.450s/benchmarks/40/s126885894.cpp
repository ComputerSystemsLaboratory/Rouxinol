#include <iostream>
#include <array>
#include <utility>
using namespace std;

int main()
{
    array<int, 6> d;
    array<int, 3> r = {0, 1, 2};
    auto rot = [&](int b, int x){swap(r[0], r[b]);r[x] = 5 - r[x];};

    for (int &x: d)
        cin >> x;

    for (char c; cin >> c;)
        switch (c) {
        case 'N': rot(1, 1); break;
        case 'S': rot(1, 0); break;
        case 'E': rot(2, 0); break;
        case 'W': rot(2, 2); break;
        }

    cout << d[r[0]] << endl;

    return 0;
}
