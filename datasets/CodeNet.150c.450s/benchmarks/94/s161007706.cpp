#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int>& v) {
    for (int i=0; i<v.size()-1; i++) {
        cout << v[i] << " ";
    }
    cout << v[v.size()-1] << endl;
}

void bubbleSort(vector<int>& v) {
    bool flag = true;
    int swapCount = 0;
    while (flag) {
        flag = false;
        for (int i=v.size()-1; i>=1; i--) {
            if (v[i] < v[i-1]) {
                swap(v[i], v[i-1]);
                swapCount++;
                flag = true;
            }
        }
    }
    disp(v);
    cout << swapCount << endl;
}

int main() {
    int i, n, tmp;
    vector<int> v;

    cin >> n;
    for (i=0; i<n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }

    bubbleSort(v);
    return 0;
}