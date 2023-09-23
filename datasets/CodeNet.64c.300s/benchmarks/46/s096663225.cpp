#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int MAX = 1000001;

int prime[MAX];

int main()
{
    prime[0] = prime[1] = 1;
    rep(i,MAX)if(!prime[i])
        for(int j = i*2;j<MAX;j+= i) prime[j] = 1;

    int a, b, n;
    while(cin >> a >> b >> n && a)
    {
        int cnt = 0;
        int ans = 0;
        REP(MAX)if(!prime[a + b * i])
        {
            cnt++;
            if(cnt == n){ ans = a+ b * i; break;}
        }
        cout << ans << endl;
        


    }

    return 0;
}