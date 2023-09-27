#include <iostream>
#include <algorithm>
#include <list>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cfloat>
#include <climits>
#include <string>
#include <map>
#include <vector>
#include <set>
#include <numeric>
#include <functional>
#include <utility>
#include <iomanip>
#include <iterator>
#include <stack>
#include <limits>
#include <sstream>
#include <fstream>
#include <ostream>
#include <bitset>
#include <queue>
#include <ctime>
#include <utility>

#define ms(a,n) (memset(a,n,sizeof(a)))
#define msv(a,v,n) for(int _a;_a<=n;_a++) a[_a]=v;
#define all(res) res.begin(),res.end()
#define mp(a,b) (make_pair(a,b))
#define pb(n) push_back(n)
#define mod 1000000007

using namespace std;

template<class T1> void deb(T1 e){cout<<e<<'\n';}
template<class T1,class T2> void deb(T1 e1,T2 e2){cout<<e1<<" "<<e2<<'\n';}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout<<e1<<" "<<e2<<" "<<e3<<'\n';}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<'\n';}
template<class T> inline T gcd(T a,T b) {if(a<0)return gcd(-a,b);if(b<0)return gcd(a,-b);return (b==0)?a:gcd(b,a%b);}
template<class T> inline T lcm(T a,T b) {if(a<0)return lcm(-a,b);if(b<0)return lcm(a,-b);return a*(b/gcd(a,b));}

typedef long long ll;
typedef pair< int, int> PII;
typedef vector< int> VI;
typedef vector< vector<int> > VVI;
typedef map< string, int> MSI;

ostream_iterator<int> screen(cout," ");
//copy(all(res),screen);

const int  sz=2*1000*100+10;
const int inf=INT_MAX>>1;
const ll big=(1LL<<62);
const double pi =acos(-1.0);
int dx[]={0,0,1,-1,1,1,-1,-1},dy[]={1,-1,0,0,1,-1,1,-1};
VI res;

ll powermod(ll n,ll p)
{
    ll x=1,y=n%mod;
    while(p)
    {
        if(p&1LL)
            x=(y*x)%mod;
        y=(y*y)%mod;
        p=p>>1LL;
    }
    return x;
}

int main()
{
    //std::ios_base::sync_with_stdio(false);
    int arr[5],brr[5];
    while(cin>>arr[0])
    {
        int a1=0,a2=0;
        for(int i=1;i<4;i++)
            cin>>arr[i];
        for(int i=0;i<4;i++)
            cin>>brr[i];
        for(int i=0;i<4;i++)
            if(arr[i]==brr[i])
                a1++;
        for(int i=0;i<4;i++)
            for(int j=0;j<4;j++)
                if(i!=j&&arr[i]==brr[j])
                    a2++;
        cout<<a1<<' '<<a2<<endl;
    }

    return 0;
}