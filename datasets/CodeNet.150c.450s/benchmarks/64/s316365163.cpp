#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int q;
    cin >> q;
    for (int l = 0; l < q; ++l) {
        int m;
        cin >> m;

        vector<int> available;
        for (int i : v) {
            vector<int> tmp;
            tmp.push_back(i);
            for (int j : available) {
                tmp.push_back(j);
                tmp.push_back(i + j);
            }
            swap(available, tmp);
        }

        if (find(begin(available), end(available), m) != end(available)) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}