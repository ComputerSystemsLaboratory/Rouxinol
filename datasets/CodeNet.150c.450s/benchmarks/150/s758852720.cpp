#include <iostream>

using namespace std;

constexpr int k = 10000;

int c[k];

int main()
{
    for (int i = 0; i < k; ++i) {
        c[i] = 0;
    }

    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++c[x];
    }

    bool first = true;
    for (int i = 0; i < k; ++i) {
        if (c[i] != 0) {
            for (int j = 0; j < c[i]; ++j) {
                if (first) {
                    first = false;
                    cout << i;
                }
                else {
                    cout << " " << i;
                }
            }

        }
    }
    cout << endl;
}


