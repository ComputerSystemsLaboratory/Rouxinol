#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;

int main() {
    int a;
    vector<int> vec;

    for (int i=0; i < 5; i++) {
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for (int i=0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1) cout << " ";
    }
    cout << endl;

    return 0;
}