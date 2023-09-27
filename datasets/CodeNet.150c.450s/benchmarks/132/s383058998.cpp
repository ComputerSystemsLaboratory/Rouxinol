#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    int n, p;
    while (cin >> n >> p, n+p) {
        vector<int> m(n, 0);
        int pos = 0;
        int wan = p;

        while (1) {
            // for (int i = 0; i < n; i++) {
            //     cout << "m[" << i << "]: " << m[i] << ", ";
            // }
            // cout << endl;
            if (m[pos] == p) break;

            if (wan == 0) {
                wan += m[pos];
                m[pos] = 0;
            } else {
                m[pos]++;
                wan--;
            }

            pos = (pos+1) % n;
        }

        cout << pos << endl;
    }

    return 0;
}