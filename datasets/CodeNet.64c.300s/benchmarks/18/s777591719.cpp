#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAXN = 32;

long long d[MAXN], day, year;

int main()
{
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;
    REP(MAXN-3) d[i+3] = d[i]+d[i+1]+d[i+2];
    
    int n;
    while(cin >> n && n)
    {
        day = d[n] / 10;
        if(d[n] % 10  > 0 ) day++;
        year = day/365;
        if(day % 365 > 0) year++;

        cout << year << endl;
    }
    return 0;
}