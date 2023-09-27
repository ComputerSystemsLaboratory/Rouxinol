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

int MAXC = 6;
int coin[] = {500, 100, 50, 10, 5, 1};

int main()
{
    int n;
    while(cin >> n && n)
    {
        int ans = 0;
        n = 1000 - n;

        REP(MAXC)while(n >= coin[i]){ n-= coin[i]; ans++;}
        
        cout << ans << endl;
    }
    return 0;
}