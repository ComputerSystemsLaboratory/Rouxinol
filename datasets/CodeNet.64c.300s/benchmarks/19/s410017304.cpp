 
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
 
 using namespace std;
 
 long long int arr[5000+5];
 long long int result[5000+5];
  
 int main()
 {
   int n;
   int count=0;
   while(cin>>n&&(n!=0))
   {
     long long int sum;
     long long int max;
     for(int i=0;i<n;i++)
     {
       cin>>arr[i];
       if(i==0) 
       {
         sum=arr[i];
         max=arr[i];
         continue;         
       }
       if(sum<0)
       {
         sum=arr[i];
         if(sum>max) max=sum;         
       }
       else if(sum+arr[i]>0)
       {
         sum=sum+arr[i];
         if(sum>max) max=sum;         
       }
       else sum=arr[i];
     }
     result[count++]=max;              
   }
   for(int i=0;i<count;i++) cout<<result[i]<<endl;
   //while(1);      
   return 0;    
 }

 
 