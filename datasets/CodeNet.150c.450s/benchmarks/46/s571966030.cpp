#include <iostream>
using namespace std;

int main()
{
    int n, x, cnt;
    for (;;)
    {
        cnt = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
            break;
        for (; n > 0; n--)
        {
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < i; j++)
                {
                    if (x - n == i + j)
                    {
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}