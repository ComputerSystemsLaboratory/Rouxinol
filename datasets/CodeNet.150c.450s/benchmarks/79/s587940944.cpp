#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, r;
    while (cin >> n >> r, n+r) {
        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            h[i] = n-i;
        }

        int p, c;
        for (int i = 0; i < r; i++) {
            cin >> p >> c;
            vector<int> tmp;
            for (int j = 0; j < c; j++) {
                tmp.push_back(h[p-1+j]);
            }
            for (int j = 0; j < p-1; j++) {
                tmp.push_back(h[j]);
            }
            for (int j = 0; j < tmp.size(); j++) {
                h[j] = tmp[j];
            }

            // cout << "#: ";
            // for (int j = 0; j < n; j++) {
            //     cout << " " << h[j];
            // }
            // cout << endl;
        }

        cout << h[0] << endl;
    }
    return 0;
}