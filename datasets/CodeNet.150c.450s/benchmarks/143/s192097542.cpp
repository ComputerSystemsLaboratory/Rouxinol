#include <bits/stdc++.h>
using namespace std;
 #define MAX 1000000000005
 #define ll long long int
 int main()
 {    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   ll t;
        long long int m,sum=0,k=0,i,d=0,j,sum1=0,sum2=0,sum3=0,l,kk,sum4=0,sum5=0,sum6=0,c=0,x,y,q;
         ll n;
           cin>>n;
          ll a[n];
           for(i=0;i<n;i++)
             {cin>>a[i];
              sum+=a[i];
             }
              map<ll,ll>mp;
              for(i=0;i<n;i++)
                 mp[a[i]]++;
          cin>>q;
           while(q--){
            cin>>x>>y;
             ll z=mp[x];
             sum-=mp[x]*x;
               mp.erase(x);
                sum+=y*z;
                 mp[y]+=z;
                 cout<<sum<<endl;

           }
    }






