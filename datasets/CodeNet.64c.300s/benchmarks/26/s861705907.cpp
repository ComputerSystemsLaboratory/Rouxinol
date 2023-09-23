 #include<iostream>
 #include<stdio.h>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 #include<stack>
 #include<queue>
 #include<functional>
 #include<utility>
 
 using namespace std;

 int main()
 {
   long long int m,n;
   cin>>m>>n;
   long long int kk=m*m;
   long long int kkk=m*m*m;
   long long int kkkk=m*m*m*m;
   long long int ans=1;
   while(n>4)
   {
     ans=((ans*kkkk)%1000000007);
     n-=4;          
   }
   if(n==4) ans=((ans*kkkk)%1000000007);
   else if(n==3) ans=((ans*kkk)%1000000007);
   else if(n==2) ans=((ans*kk)%1000000007);
   else ans=((ans*m)%1000000007);
   cout<<ans<<endl;
   //while(1);
   return 0;
 }