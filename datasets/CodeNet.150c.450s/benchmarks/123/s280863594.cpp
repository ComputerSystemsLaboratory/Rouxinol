#include <iostream>
#include <cmath>
using namespace std;
bool checkNotOdd(int n)
{
    if(n % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }

}
bool check(int n)
{
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int t = 0;
    for(int i = 0;i < n;i++)
    {
        int a;
        cin >> a;
        bool flg = true;
        flg = checkNotOdd(a);
        if(flg)
        {
            flg = check(a);
        }
        if(flg || a == 2)
        {
            t++;
        }
    }
    cout << t << endl;
}