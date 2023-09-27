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

    ll x;
    cin>>x;
    
    ll h,m,s;
    h=x/3600;
    x=x%3600;
    m=x/60;
    s=x%60;
    
    cout<<h<<":"<<m<<":"<<s<<endl;
    return 0;
}