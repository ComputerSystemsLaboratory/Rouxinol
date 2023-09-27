#include <iostream>

using namespace std;

int main()
{
    int n, m, p;

    while (cin >> n >> m >> p, n || m || p) {
        int sum, w_num, x;

        sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            
            sum += x * 100;
            if (i == m) {
                w_num = x;
                if (w_num == 0)
                    cout << "0\n";
            }
        }
        if (w_num != 0)
            cout << (sum - (sum * p / 100)) / w_num << endl;
    }

    return 0;
}