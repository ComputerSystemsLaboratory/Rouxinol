#include <iostream>
using namespace std;

int main(void)
{
    int n, a[5000];
    while (cin >> n && n!=0) {
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int max = -1e6;
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            for (int j = i; j < n; ++j) {
                sum += a[j];
                if (sum > max)
                    max = sum;
            }
        }
        cout << max << endl;
    }
    return 0;
}

