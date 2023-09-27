#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int x;
    cin >> x;
    long min, max, sum;
    min = max = sum = x;
    for (int i = 1; i < n; ++i)
    {
        cin >> x;
        if (x < min) min = x;
        if (max < x) max = x;
        sum += x;
    }
    cout << min << ' ' << max << ' ' << sum << endl;

    return 0;
}