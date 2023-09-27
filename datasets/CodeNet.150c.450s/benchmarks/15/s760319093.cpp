#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(const vector<int>& ary, int key) {
    for (auto i = 0; i < ary.size(); i++) {
        if (ary[i] == key) {
            return true;
        }
    }
    return false;
}

int main(void) {
    int n;
    cin >> n;
    vector<int> S(n);
    for (int i = 0; i < n; i++) {
        cin >> S[i];
    }
    int q;
    cin >> q;

    int cnt = 0;
    for (int i = 0; i < q; i++) {
        int key;
        cin >> key;

        if (linearSearch(S, key)) cnt++;
    }

    cout << cnt << endl;
    return 0;
}