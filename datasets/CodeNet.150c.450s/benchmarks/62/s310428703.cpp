#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int n;
    vector<int> vec;

    while (cin >> n) {
        vec.push_back(n);
    }

    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++) {
        if (i > 0)
            cout << ' ';
        cout << vec[i];
    }
    cout << endl;
    return 0;
}