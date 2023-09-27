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
    int number;
    long long answer[21] = {0};
    int i = 0;
    long long sum = 0;
    int x;
    while (cin >> number)
    {
        x = (600 / number);
        REP(k, x)
        {
            sum+= (k*number)*(k*number)*(number);
        }
        //cout << tempsum << endl;
        answer[i] = sum;
        sum = 0;
        i++;
    }
    REP(j, i)
    cout << answer[j] << endl;
    return 0;
}