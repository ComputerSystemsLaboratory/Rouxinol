#include <cstdio>
#include <utility>
#include <typeinfo>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <map>
#include <stack>
#include <queue>
#include <string>
#include <vector>
#include <tuple>
#define REP(i,n) for(int i=0;i<n;i++)
typedef long long int ll;
using namespace std;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll> vpll;
typedef vector<string> vs;

int main()
{

    ll a,b,c;
    cin>>a>>b>>c;

    ll ans(0);
    
    for(int i=a;i<b+1;i++)
    {
        if(c%i==0)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}