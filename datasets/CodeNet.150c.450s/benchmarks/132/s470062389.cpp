#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, p;
    while (cin >> n >> p, n || p) {
        vector<int> v(n, 0);
        int bowl = p;
        int k = 0;
        while (1) {
            if (0 < bowl) {
                bowl --;
                v[k] ++;
                if (v[k] == p) {
                    cout << k << endl;
                    break;
                }
            } else {
                bowl = v[k];
                v[k] = 0;
            }
            k = (k + 1) % n;
        }
    }
    return 0;
}