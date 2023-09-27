#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

#define all(bind) bind.begin(), bind.end()

template <typename T>
ostream &operator<<(ostream &os, vector<T> &v) {
    if (v.size()) {
        cout << v.front();
        for (auto vi = v.begin() + 1; vi != v.end(); vi++)
            cout << " " << *vi;
    }
    return os;
}

int main()
{
    vector<int> list;

    for (int x; cin >> x;)
        list.push_back(x);

    sort(all(list), greater<int>());

    cout << list << endl;

    return 0;
}