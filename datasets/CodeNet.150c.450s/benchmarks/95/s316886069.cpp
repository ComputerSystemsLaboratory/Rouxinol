#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
 ll a,b,c,n,m;
 
 while(1)
 {
     cin>>n;
     if(n == 0)break;
     string leg[200];
     for(int i=0;i<n;i++)
     {
         cin>>leg[i];
     }
     for(int i=n;i<199;i++)
     {
         leg[i] == "";
     }
     int count = 0;
     bool flag[4];
     for(int i=0;i<n;i = i+2)
     {
         if((leg[i] == "lu" && leg[i+1] == "ru") || (leg[i] == "ld" && leg[i+1] == "rd") || (leg[i] == "ru" && leg[i+1] == "lu") || (leg[i] == "rd" && leg[i+1] == "ld"))
         count++;
     }
     cout<<count<<endl;
 }
}
