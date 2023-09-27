#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n,m;
         cin>>n;
   m=sqrt(n);
   cout<<n<<":";
    for(int i=2;i<=n;i++)
     {
      while(n%i==0){
        cout<<" "<<i;
        n/=i;
         }
   if(n==1)
     break;
      if(i>=sqrt(n))
        {
        cout<<" "<<n;
        break;
        }
}
    cout<<endl;
}