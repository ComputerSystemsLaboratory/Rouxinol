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
 
 int arr[1000000+5];
 
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
   int n;
   int count=0;
   cin>>n;
   int k=n;
   while(n%2==0)
   {
     arr[count++]=2;
     n/=2;             
   }
   int kk=n;
 if(n>1)
 {
   if(is_prime(kk)) arr[count++]=kk;
   else
   {
     for(int i=3;i<=kk;i=i+2)
     {
       if(is_prime(i))
       {
         while(n%i==0)
         {
           arr[count++]=i;
           n/=i;             
         }               
       }        
       if(n==1) break;
     }
   }
 }
   cout<<k<<":";
   for(int i=0;i<count;i++) cout<<" "<<arr[i];
   cout<<endl;
   //while(1);
   return 0;
 }

 