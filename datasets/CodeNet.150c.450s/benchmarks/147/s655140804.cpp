#include<bits/stdc++.h>
typedef long long     ll;
#define fast          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define last          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fr            first
#define sc            second
#define lcm(a,b)      (a*b)/__gcd(a,b)
#define com(i,n)      for(int i=0;i<n;i++)
#define dom(i,n)      for(int i=1;i<=n;i++)
#define mom(i,n)      for(int i=n;i>=0;i--)
#define sortI(a,n)    sort(a,a+n)
#define sortD(a,n)    sort(a,a+n,greater<int>())
#define sortvi(a)     sort(a.begin(),a.end())
#define sortvd(a)     sort(a.begin(),a.end(),greater<int>())
#define sumall(a,x)   accumulate(a.begin(),a.end(),x)
#define pi            3.14159265358979323846264338327950
#define endl          '\n'
using namespace std;
int main()
{
    fast
    int n;
    cin>>n;
    vector<vector<int>>mp(10010,vector<int>(4,0));
    dom(i,100)
    {
        for(int j=i; j<=100; j++)
        {
            for(int k=j; k<=100; k++)
            {
                if(i*i+j*j+k*k+i*j+j*k+k*i<=10000)
                {
                    set<int>ss;
                    ss.insert(i);
                    ss.insert(j);
                    ss.insert(k);
                    mp[i*i+j*j+k*k+i*j+j*k+k*i][ss.size()]++;
                }
            }
        }
    }
    ll ans[n+1];
    dom(i,n)
    {
        mp[i][2]*=3;
        mp[i][3]*=6;
        ans[i]=mp[i][1]+mp[i][2]+mp[i][3];
    }
    dom(i,n)
    {
        cout << ans[i] << endl;
    }
}
