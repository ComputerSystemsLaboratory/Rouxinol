#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <functional>
#include <vector>
#include <stack>
#include <set>
using namespace std;
typedef  long long ll;
const int maxn=1e6+50;
const int inf=0x3f3f3f3f;
const int MOD=1e9+7;
const int HASH=131;


int main()
{
    int n;
    cin>>n;
    int ac=0;
    int wa=0;
    int tle=0;
    int re=0;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="AC") ac++;
        else if(s=="WA") wa++;
        else if(s=="TLE") tle++;
        else if(s=="RE") re++;
    }
    printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n",ac,wa,tle,re);
    return 0;
}
