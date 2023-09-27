#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> num(1000);
    num[0] = 0;
    for (int i = 1; i < 1000; i++) {
        if (i%3 == 0) {
            num[i] = 20*10 + num[i-1];
        } else {
            num[i] = 19*5 + 20*5 + num[i-1];
        }
    }

    int n; cin >> n;
    int y, m, d;
    while (n--) {
        cin >> y >> m >> d;
        d += num[y-1] - 1;
        if (y%3 == 0) {
            d += 20*(m-1);
        } else {
            for (int i = 1; i < m; i++) {
                if (i%2 == 0) {
                    d += 19;
                } else {
                    d += 20;
                }
            }
        }

        cout << num[999] - d << endl;

    }
    return 0;
}