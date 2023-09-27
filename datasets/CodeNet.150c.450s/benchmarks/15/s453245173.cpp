#include <iostream>
#include <set>

using namespace std;

int main() {
    int d;

    int n;
    cin >> n;

    set<int> S;
    for (int i = 0; i < n; i++) {
        scanf("%d", &d);
        S.insert(d);
    }

    int q;
    cin >> q;
    set<int> T;
    for (int i = 0; i < q; i++) {
        scanf("%d", &d);
        T.insert(d);
    }

    int C = 0;
    for (auto Si : S) {
        for (auto Ti : T) {
            if (Si == Ti) {
                C++;
            }
        }
    }

    cout << C << endl;

    return 0;
}