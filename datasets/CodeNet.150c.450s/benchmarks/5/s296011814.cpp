#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int i = v.size() - 1; i >= 0; --i) {
        cout << v[i];
        if (i == 0) {
            cout << "\n";
        }
        else {
            cout << " ";
        }
    }
}