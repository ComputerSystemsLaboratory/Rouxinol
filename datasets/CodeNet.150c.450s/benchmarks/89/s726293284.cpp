#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int MAX = 1000001;

bool prime[MAX];
int a, d, n;

int main()
{
    prime[0] = true;
    prime[1] = true;
    for(int i =2; i < MAX; i++)if(!prime[i])
        for(int j= i*2;j<MAX;j+= i) prime[j] = true;


    while(cin >> a >> d >> n && a)
    {
        int ans = 0, cnt = 0;
        for(int i = a; a < MAX; i += d )if(!prime[i])
        {
            cnt++;
            if(cnt == n){ ans = i;break;}

        }
        cout << ans << endl;
    }
    return 0;
}