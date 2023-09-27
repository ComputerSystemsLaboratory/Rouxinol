#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <iomanip>
#include <random>

#include <fstream>
#include <vector>
#include <algorithm>

#define ll long long int

using namespace std;

bool isPrime(ll n)
{
    if(n == 1)
    {
        return false;
    }
    for(ll i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    
    return true;
}

int main(void)
{

    
    ll d, tmp;
    deque<ll> c, s, res, typ(26, 0);
    
    cin >> d;
    
    for(int i = 0; i < 26; i++)
    {
        cin >> tmp;
        c.push_back(tmp);
    }
    
    for(ll i = 0; i < d; i++)
    {
        for(ll j = 0; j < 26; j++)
        {
            cin >> tmp;
            s.push_back(tmp);
        }
    }
    
    for(ll i = 0; i < d; i++)
    {
        cin >> tmp;
        if(i == 0)
        {
            res.push_back(s[26*i+tmp-1]);
        }
        else
        {
            res.push_back(s[26*i+tmp-1] + res[i - 1]);
        }
        
        for(ll j = 0; j < 26; j++)
        {
            if(j+1==tmp)
            {
                typ[j] = 0;
            }
            else
            {
                typ[j]++;
                res[i] -= c[j]*typ[j];
            }
        }
    }
    
    for(ll i = 0; i < d; i++)
    {
        cout << res[i] << endl;
    }
    
    return 0;
}
