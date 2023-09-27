#include<bits/stdc++.h>
using namespace std;
#define ll int64_t
#define ul unsigned long long int
#define vi vector<int>
#define vl vector<int64_t>
#define all(x) x.begin(),x.end()
#define pb push_back
#define fo(x,a,b) for(int x=a; x<b; x++)
#define rfo(x,a,b) for(int x=a; x>=b; x--)
#define fi first
#define sec second
#define mp make_pair
int sgn(int x) { return x>0 ? 1 : ( x<0 ? -1 : 0); }
typedef pair<int,int> pairs;
double pi = 3.14159265358979323846;
ll mod = 1000000007;

int main()
{
#ifdef _DEBUG
    freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(0);
    ll n;
    cin>>n;
    int s = sqrt(n);
    vi ans(n+1,0);
    fo(i,1,s)
    {
      fo(j,1,s)
      {
        fo(k,1,s)
        {
          int z = i*i + j*j + k*k + i*j + j*k + k*i;
          if(z>n) break;
          ans[z]+=1;
        }
      }
    }
    fo(i,1,n+1) cout<<ans[i]<<"\n";
    return 0;
}