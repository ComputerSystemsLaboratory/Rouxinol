#include <bits/stdc++.h>
#include <stdio.h>
typedef long long int LL;
#define fr(i,p,n) for(LL i=p;i<n;i++)
#define fr1(i,p,n) for(LL i=p;i>=n;i--)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(),v.end()
#define PI 3.14159265358979323846
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define precise cout << std::setprecision(10) << std::fixed;

using namespace std;
LL ans[10050]={0};
int main()
{
        LL n;
        cin>>n;
        fr(i,1,105){
            fr(j,1,105){
                fr(k,1,105){
              LL v= i*i+j*j+k*k+i*j+j*k+k*i;
              if (v<10050) ans[v]+=1; 
        }
        }
        }
        fr(i,1,n+1) cout<<ans[i]<<endl;
    return 0;
}