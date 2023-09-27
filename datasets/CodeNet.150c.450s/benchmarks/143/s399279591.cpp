#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <ctime>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define TT int test_cases; cin >> test_cases; while(test_cases--)
#define TT1 int test_cases=1; while(test_cases--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
 
using namespace std;
typedef long long int ll;

 
int main() {
    
    FAST;
    TT1{
        
        int n;cin>>n;
        vector<ll> a(n);
        map<ll,ll> m;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            m[a[i]]++;
            sum+=a[i];
            
        }
        int q;cin>>q;
        for(int i=0;i<q;i++)
        {
            ll b,c;cin>>b>>c;
            ll t=m[b];
            sum=sum+t*(c-b);
            m.erase(b);
            m[c]=m[c]+t;
            cout<<sum<<"\n";
        }
        
        
    }
}