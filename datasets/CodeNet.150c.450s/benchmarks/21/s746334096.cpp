#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<vector<int>> vec(100, vector<int>(100, 0));
    cin >> vec.at(99).at(99);
    int num = vec.at(99).at(99);
    cout << num * num * num << endl;
}
