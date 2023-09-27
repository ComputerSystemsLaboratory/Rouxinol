#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, swapNum = 0, flag = 1, temp;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    while (flag) {
        flag = 0;
        for (int j = n-1; j >= 1; j--) {
            if (v[j] < v[j-1]) {
                swap(v[j], v[j-1]);
                flag = 1;
                swapNum++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
            cout << v[i];
            if (i != n-1) cout << " ";
    }
    cout << endl << swapNum << endl;
    return 0;
}