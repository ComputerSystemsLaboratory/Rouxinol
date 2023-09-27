#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> s((1000 + 2) * (1000 - 2) / 2, 0);
    for (int l = 2; l <= 1000; ++l) {
        for (int i = 1; i <= 1000 - l + 1; ++i) {
            int sum = 0;
            for (int j = i; j < i + l; ++j) {
                sum += j;
            }
            s[sum] += 1;
        }
    }

    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            return 0;
        }

        cout << s[n] << endl;
    }
}