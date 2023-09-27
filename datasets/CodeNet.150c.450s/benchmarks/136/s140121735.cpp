#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <ctime>
#include <assert.h>

#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define eps 1e-8
#define M_PI 3.141592653589793

typedef long long ll;
const ll mod=1000000007;
const int inf=0x7fffffff;
ll powmod(ll a,ll b) {ll res=1;a%=mod;for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
using namespace std;
ll gcd(ll a,ll b) {return b==0? a: gcd(b,a%b);}
int main()
{
    ll a,b;
    while(cin>>a>>b){
        cout<<gcd(a,b)<<" "<<a/gcd(a,b)*b<<endl;
    }
}