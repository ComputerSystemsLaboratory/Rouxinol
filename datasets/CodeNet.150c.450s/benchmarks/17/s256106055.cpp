#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v(5);
    for (int i=0; i<5; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int i=0; i<5; ++i) {
        cout << (i == 0 ? "" : " ") << v[i];
    }
    cout << endl;
    return 0;
}