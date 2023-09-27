#include <iostream>
using namespace std;

bool isDivisor(int target, int div)
{
    return target % div == 0;
}

int main()
{
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;

    int count = 0;
    for (int i=a; i <= b; ++i)
    {
        count += isDivisor(c, i) ? 1 : 0;
    }
    cout << count << endl;

    return 0;
}