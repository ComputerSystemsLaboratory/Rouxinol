#include <iostream>
#define H 600
#define INF 2000000005

using namespace std;
int main() {
    int h;
    cin >> h;
    int tree[H];
    for (int i = 0; i < h; i++)
        cin >> tree[i];
    for (int i = h; i < H; i++)
        tree[i] = INF;
    for (int i = 0; i < h; i++) {
        int node = i + 1;
        cout << "node " << node << ": key = " << tree[node - 1] << ", ";
        if (i != 0)
            cout << "parent key = " << tree[node / 2 - 1] << ", ";
        if (tree[node * 2 - 1] != INF)
            cout << "left key = " << tree[node * 2 - 1] << ", ";
        if (tree[node * 2 + 1 - 1] != INF)
            cout << "right key = " << tree[node * 2 + 1 - 1] << ", ";
        cout << '\n';
    }
}
