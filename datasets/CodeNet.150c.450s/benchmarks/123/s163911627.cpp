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
 
 using namespace std;
 
 bool is_prime(int x)
 {
   if(x==2) return true;
   else
   {
     for(int i=2;i<=sqrt(x);i++)
     {
       if(x%i==0) return false;        
     }    
     return true;
   }     
 }
 
 int main()
 {
   int N;
   cin>>N;
   int count=0;
   while(N--)
   {
     int x;
     cin>>x;
     int flag=is_prime(x);
     if(flag) count++;          
   }
   cout<<count<<endl;
   //while(1);
   return 0;
 }
 
 
 