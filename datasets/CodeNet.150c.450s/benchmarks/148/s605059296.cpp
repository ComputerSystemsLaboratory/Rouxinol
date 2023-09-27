#include<bits/stdc++.h>
using namespace std;
typedef  long long  ll;
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
typedef pair<ll,ll>pll;
const  ll MAX=100000000;
int main()
{



   ll t;

   cin>>t;

   ll ac=0,wa=0,tle=0,re=0;

   while(t--)
   {
       string str;
       cin>>str;

    if(str=="AC")ac++;
    else if(str=="WA")wa++;
    else if(str=="TLE")tle++;
     else if(str=="RE")re++;


   }

   cout<<"AC x "<<ac<<endl;
     cout<<"WA x "<<wa<<endl;
       cout<<"TLE x "<<tle<<endl;
         cout<<"RE x "<<re<<endl;


}

