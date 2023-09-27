#include <iostream>
#include <math.h>
#include <stdio.h>
#include <vector>

using namespace std;

vector<int> F;
int memo(int n)
{
    int size = F.size();

    if (n < size)
    {
        return F[n];
    }

    for (int i = size; i <= n; i++)
    {
        switch (i)
        {
        case 0:
            F.push_back(1);
            break;
        case 1:
            F.push_back(F[i - 1]);
            break;
        case 2:
            F.push_back(F[i - 1] + F[i - 2]);
            break;
        default:
            F.push_back(F[i - 1] + F[i - 2] + F[i - 3]);
            break;
        }
    }

    return F[n];
}

int main()
{
    int n;
    while (cin >> n && n)
    {
        double ans = memo(n) / (10.0 * 365.0);
        cout << (int)(ceil(ans)) << endl;
    }
    return 0;
}
