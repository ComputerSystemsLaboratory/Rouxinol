#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    while (cin >> n && n != 0) {
        int *a = new int[n];
        int m;
        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            a[i] = t;
        }
        m = a[0];
        for (int j = 0; j < n; j++) {
            int t = 0;
            for (int k = j; k < n; k++) {
                t += a[k];
                if (m < t) m = t;
            }
        }
        delete [] a;
        cout << m << endl;
    }
    return 0;
}