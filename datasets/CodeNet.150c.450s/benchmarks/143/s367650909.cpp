#include <bits/stdc++.h>
using namespace std;
 #define MAX 1000000000005
 #define ll long long int
 int main()
 {    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        long long int m,sum=0,k=0,i,d=0,j,sum1=0,sum2=0,sum3=0,l,kk,sum4=0,sum5=0,sum6=0,c=0,x,y,q;
         ll n;
           cin>>n;
          ll a[n],b[1000000]={0};
           for(i=0;i<n;i++)
             {cin>>a[i];
              b[a[i]]++;
              sum+=a[i];
             }
          cin>>q;
           while(q--){
            cin>>x>>y;
             c=b[x];
             d=b[y];
             sum-=x*b[x];
             sum+=y*b[x];
              cout<<sum<<endl;
              b[y]+=b[x];
              b[x]=0;


           }
    }


