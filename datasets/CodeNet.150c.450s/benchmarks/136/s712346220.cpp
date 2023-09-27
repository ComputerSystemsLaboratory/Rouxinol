#include<bits/stdc++.h>

using namespace std;


int main(){
   long long a,b;
   while (cin>>a>>b)
   {
       long long gcd =__gcd(a,b);
       cout<<gcd<<" "<<(a*b)/gcd<<endl;
   }


    return 0;
}
