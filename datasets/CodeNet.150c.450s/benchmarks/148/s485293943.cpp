/**************************************************************** Muslim *********************************************************************
                                ________           /\          _______       ______          /\        |\     |
                                |                 /  \        |             |      |        /  \       | \    |
                                |_______         /____\       | ___         | ____ |       /____\      |  \   |
                                        |       /      \      |             |     \       /      \     |   \  |
                                ________|      /        \     |             |      \     /        \    |    \ |

*********************************************************************************************************************************************/
/*                                                  Don't give up until the last second.
                                                            Practice makes a man perfect
                                                         pain is temporary pride is forever
*/
#include<bits/stdc++.h>
using namespace std;

#define                                 ff                                          first
#define                                 ss                                          second
#define                                 pai                                         acos(-1)
#define                                 ll                                          long long
#define                                 pb                                          push_back
#define                                 mp                                          make_pair
#define                                 pll                                         pair<ll,ll>
#define                                 sz(a)                                       (ll)a.size()
#define                                 endl                                        "\n"
#define                                 gcd(a, b)                                   __gcd(a, b)
#define                                 lcm(a, b)                                   (((a)*(b))/gcd(a,b))
#define                                 all(vec)                                    vec.begin(),vec.end()
#define                                 ms(a, b)                                    memset(a,b,sizeof(a))
#define                                 TEST_CASE(t)                                for(ll www=1;www<=t;www++)
#define                                 PRINT_CASE                                  printf("Case %lld: ",www)
#define                                 fii                                         freopen("input.txt","r",stdin);
#define                                 foo                                         freopen("output.txt","w",stdout);
#define                                 fast                                        ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);


//Bit Operations
inline bool checkBit(ll n, int i) { return n&(1ll<<i); }
inline ll setBit(ll n, int i) { return n|(1ll<<i);; }
inline ll resetBit(ll n, int i) { return n&(~(1ll<<i)); }

const ll mod  = 1e9 +07;
const ll mxn  = 1e6 +10;

int  main(int argc, char const *argv[])
{
    ll i,j,k,a,b,c,d,n,m,t,h,u,v,x,y,z;
    map<string,ll>frq;
    cin>>t;
    TEST_CASE(t)
    {
        string s;
        cin>>s;
        frq[s]++;
    }
    cout<<"AC"<<" x "<<frq["AC"]<<endl;
    cout<<"WA"<<" x "<<frq["WA"]<<endl;
    cout<<"TLE"<<" x "<<frq["TLE"]<<endl;
    cout<<"RE"<<" x "<<frq["RE"]<<endl;
    return 0;
}

