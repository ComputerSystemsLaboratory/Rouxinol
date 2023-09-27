#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define run ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);cerr.tie(0);
#define mod 1000000007
#define ms(a,x) memset(a,x,sizeof(a))


ll gcd(ll a, ll b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 


int main()
 {
  run;
  string s1="AC",s2="WA",s3="TLE",s4="RE";
  
  ll t,c1=0,c2=0,c3=0,c4=0;
  cin>>t;
  while(t--)
 {
   string s;
   cin>>s;
   if(s==s1)
     c1++;
     else if(s==s2)
       c2++;
       else if(s==s3)
        c3++;
        else if (s==s4)
          c4++;
 }
cout<<s1<<" "<<"x"<<" "<<c1<<endl;
cout<<s2<<" "<<"x"<<" "<<c2<<endl;
cout<<s3<<" "<<"x"<<" "<<c3<<endl;
cout<<s4<<" "<<"x"<<" "<<c4<<endl;
  
 }