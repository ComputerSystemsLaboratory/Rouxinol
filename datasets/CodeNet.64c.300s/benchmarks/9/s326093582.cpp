#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <utility>

#define ll (long long)
#define REP(i,n) for(int i = 0;i<(int)n;i++)
#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (a);i>(b);i--)


using namespace std;


int main(void)
{
    int n;
    int money = 100000;
    cin >> n ;
    FOR(i, 1,n+1 )
    {
        money += money*0.05;
        if(money % 1000 != 0)
            money += 1000 -  (money % 1000);
    }

    cout << money << endl;
    return 0;
}