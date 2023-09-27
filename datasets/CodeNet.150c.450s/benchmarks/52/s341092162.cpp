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
    int a[250][2] ={0};
    int i = 0,j = 0,k = 0,l = 0;
    int answer[220] = {0};
    bool judge = true;
    int tempjudge = 0;
    
    while(cin >> a[i][0])
    {
        if(a[i][0] == 0)
        {
            a[i][1] = 1;
            RFOR(j,i,-1)
            if(a[j][1] != 1 )
            {
                answer[l] = a[j][0];
                a[j][1] = 1;
                cout << answer[l] << endl;
                l++;
                break;
            }
        }
        
        i++;
    }
    
    return 0;
}