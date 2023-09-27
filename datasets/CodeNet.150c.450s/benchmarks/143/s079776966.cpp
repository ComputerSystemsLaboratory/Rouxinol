#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
#define pb push_back
#define eb emplace_back
const  int MAX=1000000;

int main()
{
   ll t;

   t=1;

   while(t--)
   {
     ll n,k;

     cin>>n;


     ll ara[n+1];

     ll sum=0;
         map<ll,ll>m;

     for(ll i=1;i<=n;i++)
     {
         cin>>ara[i];

         sum+=ara[i];
         m[ara[i]]++;
     }


   //  cout<<sum<<endl;

     ll q;

     cin>>q;





     while(q--)
     {

         ll a,b;

         cin>>a>>b;

        ll pre=m[a]*a;
        ll add=m[a]*b;

          m[b]+=m[a];
           m[a]=0;

        sum+=add-pre;

        cout<<sum<<endl;



     }






   }

    }









