#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }

    cin >> n;
    deque<int> t;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        t.push_back(x);
    }

    int sameNumCount = 0;
    for (auto numT : t) {
        for (auto numS : s) {
            if (numT == numS) {
                sameNumCount++;
                break;
            }
        }
    }

    cout << sameNumCount << endl;

    return 0;
}