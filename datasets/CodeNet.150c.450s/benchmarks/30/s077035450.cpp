#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, temp, minj, swapNum = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        minj = i;
        for (int j = i; j < n; j++) {
            if (v[j] < v[minj]) minj = j;
        }
        if (v[i] != v[minj]) {
            swap(v[i], v[minj]);
            swapNum++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << v[i];
        if (i != n-1) cout << " ";
    }
    cout << endl << swapNum << endl;
    return 0;
}