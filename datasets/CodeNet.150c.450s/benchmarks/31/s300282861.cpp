#include <iostream>
#include <climits>
using namespace std;

int main(void)
{
    int i;
    int n;
    int r[200000];

    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> r[i];
    }

    int min = r[0];
    int ret = INT_MIN;
    for (i = 1; i < n; i++) {
        int tmp = r[i] - min;
        ret = (tmp > ret)  ? tmp : ret;
        min = (r[i] < min) ? r[i] : min;
    }

    cout << ret << endl;

    return 0;
}