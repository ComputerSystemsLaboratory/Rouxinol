#include <iostream>
using namespace std;
#define ll long long

ll p_cal_gcd(ll big, ll small)
{
    if(small == 0) return big;
    else return p_cal_gcd(small, big % small);
}

ll cal_gcd(ll a, ll b)
{
    return a > b ? p_cal_gcd(a, b) : p_cal_gcd(b, a);
}

int main()
{
    ll a, b;
    ll gcd, lcm;
    while(cin >> a >> b)
    {
        gcd = cal_gcd(a, b);
        lcm = a * b / gcd;
        cout << gcd << " " << lcm << endl;
    }
}