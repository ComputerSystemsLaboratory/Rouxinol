#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef pair<int, char> C;
int N;
C co[36];

C cb[36];
vector<char> so[10];

void check_and_print() {
    cout << cb[0].second << cb[0].first;
    for (int i = 1; i < N; i++) {
        cout << " " << cb[i].second << cb[i].first;
    }
    cout << endl;

    bool stable = true;
    for (int i = 1; i <= 9; i++) {
        if (so[i].size() == 0) { continue; }
        int j;
        for (j = 0; ; j++) {
            if (cb[j].first == i) { break; }
        }
        for (int k = 0; k < (int)so[i].size(); k++) {
            if (cb[j + k].second != so[i][k]) { stable = false; }
        }
    }

    cout << (stable ? "Stable" : "Not stable") << endl;
}

void solve() {
    for (int i = 0; i < N; i++) {
        int v = co[i].first;
        char s = co[i].second;
        so[v].push_back(s);
    }

    for (int i = 0; i < N; i++) { cb[i] = co[i]; }
    for (;;) {
        bool update = false;
        for (int i = 0; i < N - 1; i++) {
            if (cb[i].first > cb[i + 1].first) {
                swap(cb[i], cb[i + 1]);
                update = true;
            }
        }
        if (!update) { break; }
    }

    check_and_print();

    for (int i = 0; i < N; i++) { cb[i] = co[i]; }
    for (int i = 0; i < N; i++) {
        int minj = i;
        for (int j = i; j < N; j++) {
            if (cb[minj].first > cb[j].first) { minj = j; }
        }
        swap(cb[minj], cb[i]);
    }

    check_and_print();
}

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        char suit = s[0];
        int value = s[1] - '0';
        co[i] = C(value, suit);
    }

    solve();
    return 0;
}