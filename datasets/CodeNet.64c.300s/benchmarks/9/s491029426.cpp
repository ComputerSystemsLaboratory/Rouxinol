#include <iostream>
typedef unsigned long long ULL;
using namespace std;
inline ULL round(ULL t)
{
    cout << t << endl;
    return ((ULL)((double)t / 1000 + 0.5))*1000;
}
int main()
{
    int t;
    ULL res = 100000;
    cin >> t;
    while(t--)
    {
        res *= 1.05;
        if(res % 1000 !=0)
            res += 1000 - res % 1000;
    }
    cout << res << endl;
    return 0;
}