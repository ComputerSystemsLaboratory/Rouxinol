#include <iostream>
using namespace std;

#define MAX_SIZE 300

int T[MAX_SIZE];

int parent(int i) { return i / 2; }
int left(int i) { return i * 2; }
int right(int i) { return i * 2 + 1; }

int main() {
    int H;
    cin >> H;
    for (int i = 1; i <= H; i++) cin >> T[i];

    for (int i = 1; i <= H; i++) {
        cout << "node " << i << ": key = " << T[i] << ", ";
        if (parent(i) > 0) cout << "parent key = " << T[parent(i)] << ", ";
        if (left(i) <= H) cout << "left key = " << T[left(i)] << ", ";
        if (right(i) <= H) cout << "right key = " << T[right(i)] << ", ";
        cout << endl;
    }

    return 0;
}
