#include <iostream>
#include <vector>

using namespace std;

int main() {
    uint16_t n;

    cin >> n;

    vector<uint16_t> a(n);

    for (uint16_t i = 0; i < n; i++)
        cin >> a[i];

    for (uint16_t i = n; i > 0; i--)
        if (i == 1)
            cout << a[i-1] << endl;
        else
            cout << a[i-1] << " ";

    return 0;
}