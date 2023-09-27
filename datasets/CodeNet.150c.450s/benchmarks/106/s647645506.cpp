#include <iostream>

using namespace std;

const int MIN = 1;
const int MAX = 10000;

bool isIN(int v)
{
    if ((MIN <= v) && (v <= MAX))
    {
        return true;
    }
    return false;
}

bool isOrder(int a, int b)
{
    if (a <= b)
    {
        return true;
    }
    return false;
}

int main()
{
    int a,b,c;
    while (cin >> a >> b >> c)
    {
        if (!isIN(a) || !isIN(b) || !isIN(c))
        {
            continue;
        }
        if (!isOrder(a, b))
        {
            continue;
        }
        int cnt = 0;
        for (int i = a; i <= b; i++)
        {
            if ((c % i) == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return (0);
}