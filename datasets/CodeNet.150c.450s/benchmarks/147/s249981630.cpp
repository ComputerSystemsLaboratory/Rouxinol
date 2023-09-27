#include <bits/stdc++.h>
 
using namespace std;
 
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define forp(a,b,c) for(int (a)=(b); (a)<(c); (a++))
#define form(a,b,c) for(int (a)=(b); (a)>(c); (a--))
#define fori(a,b) for(auto (a):(b))
#define pb(a) push_back(a)
#define INF ((unsigned) ~0)
#define endl "\n"
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
ll gcd(ll a, ll b) {return b ? gcd(b, a%b) : a;}
 
int main()
{
    fastIO
    map<int,int> res;
    forp(i,1,101)
    {
        forp(j,1,101)
        {
            forp(k,1,101)
            {
                ++res[i*i + j*j + k*k + i*j + j*k + i*k];
            }
        }
    }
    int n;
    cin>>n;
    forp(i,1,n+1) cout<<res[i]<<endl;
}