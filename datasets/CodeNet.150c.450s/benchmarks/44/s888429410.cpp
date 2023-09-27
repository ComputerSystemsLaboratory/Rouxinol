#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int a[4], b[4];
    while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3]) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < 4; ++i)
            if (a[i] == b[i])
                ++sum1;
        for (int i = 0; i < 4; ++i)
            for (int j = 0; j < 4; ++j)
                if (i != j && a[i] == b[j])
                    ++sum2;
        cout << sum1 << " " << sum2 << endl;
    }

    return 0;
}

