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

int main()
{
    int s=0,a,t=0,b;
    REP(4){cin >> a; s+=a;}
    REP(4){cin >> b; t+=b;}
    cout << max(s,t) << endl;
    return 0;
}