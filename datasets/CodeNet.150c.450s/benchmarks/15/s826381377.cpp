#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> t;
    t.reserve(10000);
    int count = 0;

    int in;

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        t.push_back(in);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> in;
        for (const int& v : t) {
            if (in == v) {
                count += 1;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}