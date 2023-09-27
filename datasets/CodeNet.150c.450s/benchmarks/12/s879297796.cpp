#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Input
    int n;
    cin >> n;
    vector<int> heap(n + 1);
    for (int i = 0; i < n; ++i) {
        int key;
        cin >> key;
        heap[i + 1] = key;
    }

    // Output
    for (int i = 1; i <= n; ++i) {
        cout << "node " << i << ": key = " << heap[i] << ", ";
        if (i > 1) {
            cout << "parent key = " << heap[i / 2] << ", ";
        }
        if (i * 2 <= n) {
            cout << "left key = " << heap[i * 2] << ", ";
        }
        if (i * 2 + 1 <= n) {
            cout << "right key = " << heap[i * 2 + 1] << ", ";
        }
        cout << endl;
    }
    return 0;
}
