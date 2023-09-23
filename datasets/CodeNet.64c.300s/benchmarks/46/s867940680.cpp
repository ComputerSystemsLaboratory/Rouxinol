#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAXP = 1000 * 1000;
int p[MAXP] = {};

int main()
{
    p[0] = p[1] = 1;
    for(int i = 2; i < MAXP; i++)if(!p[i])
        for(int j = i * 2; j < MAXP; j += i) p[j] = 1;
    
    int a, d, n;
    while(cin >> a >> d >> n && n)
    {
        int ai = 0, num = 0;
        REP(MAXP)
        {
            ai = a + d * i;
            if(!p[ai]) num++;
            if(num == n) {cout << ai << endl; break;}
        }
    }

    return 0;
}