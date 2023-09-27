#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int num[10001];
    for (int i = 1; i <= 1000; i++) {
        num[i] = num[i-1] + i;
    }

    int n;
    while (cin >> n, n) {
        int i = 0, j = 0, res = 0;;
        while (j <= (n + 1) / 2) {
            if (num[j] - num[i] < n) {
                j++;
            } else if (num[j] - num[i] == n && j - i >= 2) {
                res++;
                i++;
            } else {
                i++;
            }
        }

        cout << res << endl;
    }

    return 0;
}