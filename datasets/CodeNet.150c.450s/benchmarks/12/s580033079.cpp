#include <bits/stdc++.h>

using namespace std;

#define Vi vector<int>
#define FOR(i,s,e) for (int i=s; i<e; i++)
#define ITER(v) v.begin(), v.end()

constexpr int H_MAX = 250;

int a[H_MAX];

void print_node(int index, int H) {
    int id = index + 1;
    cout << "node " << id <<
        ": key = " << a[index];
    int parent_index = id / 2 - 1;
    if (parent_index >= 0) {
        cout << ", parent key = " << a[parent_index];
    }
    int left_index = 2 * id - 1;
    if (left_index < H) {
        cout << ", left key = " << a[left_index];
    }
    int right_index = 2 * id;
    if (right_index < H) {
        cout << ", right key = " << a[right_index];
    }
    cout << ", " << endl;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    int H;
    cin >> H;
    FOR(i,0,H) { cin >> a[i]; }
    FOR(i,0,H) { print_node(i,H); }

    return 0;
}