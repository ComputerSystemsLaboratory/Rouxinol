#include <iostream>

using namespace std;

int main()
{
    int n;
    while (cin >> n, n) {
        int count = 0;
        for (int i = 1; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += j;
                if (sum == n) {
                    count++;
                    break;
                }
                if (sum > n)
                    break;
            }
        }
        cout << count << endl;
    }
    return 0;
}