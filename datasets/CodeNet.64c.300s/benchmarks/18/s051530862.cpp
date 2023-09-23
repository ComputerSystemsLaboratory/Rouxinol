#include <algorithm>
#include <iostream>

using namespace std;

int hoge[124], n;

int main()
{
    hoge[0] = 1;
    for (int i = 1; i <= 30; i++) {
        hoge[i] = hoge[i - 1];
        if (i > 1)
            hoge[i] += hoge[i - 2];
        if (i > 2)
            hoge[i] += hoge[i - 3];
    }
    while (cin >> n && n) {
        cout << ((hoge[n] / 10) / 365) + 1 << endl;
    }
}
