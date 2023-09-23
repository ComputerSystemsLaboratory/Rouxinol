#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x, y, s, max, i, j, sum, tmp;
    while (cin >> x >> y >> s, x) {
        max = 0;
        for (i = 1; i < s; ++i) {
            j = (s - i * (100 + x) / 100) * 100 / (100 + x);
            tmp = i * (100 + x) / 100 + j * (100 + x) / 100;
            if (tmp != s) {
                j++;
                tmp = i * (100 + x) / 100 + j * (100 + x) / 100;
            }
            if (tmp != s || j <= 0)
                continue;
            sum = i * (100 + y) / 100 + j * (100 + y) / 100;
            max = (max < sum) ? sum : max;
        }
        cout << max << endl;
    }
    return 0;
}